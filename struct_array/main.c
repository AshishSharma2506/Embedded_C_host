/*
 * main.c
 *
 *  Created on: 04-Apr-2023
 *      Author: HP
 */

// video 189
// creating a using a structure array
// Ref ECB 61(ii)

#include <stdio.h>
#include <stdint.h>
#include <string.h>


// creating the student record structure
typedef struct
{
	int32_t rollNumber;
	char    name[50];
	char    branch[20];
	char    dob[10];
	int8_t  semester;
}STUDENT_INFO_t;


uint8_t max_record = 10;// max record this application can store

// creating a global array of our structure for 10 students
// see how they are placed in memory .Ref ECB 61(ii)
STUDENT_INFO_t students[10];


// fucntion prototypes for this program
int display_menu(void);
void decode_menu(int8_t input);
void display_all_records(STUDENT_INFO_t *pBaseAddrRecords,uint8_t max_record);
int check_roll_number(STUDENT_INFO_t *pBaseAddrRecords,uint8_t max_record,int32_t roll_number);
int add_record(STUDENT_INFO_t *pBaseAddrRecords,uint8_t max_record);
int delete_record(STUDENT_INFO_t *pBaseAddrRecords,uint8_t max_record);
void wait_for_user_input(void);

int main(void)
{
	int8_t menu_code;// code for the user to interact with the program and take action
	printf("Student Record Menu Program.\n");// first print to describe the program


	int8_t app_continue = 1;
	while(app_continue)
	{
		// display the menu to the user
		menu_code = display_menu();
		if(menu_code){
			decode_menu(menu_code);}
		else{
			printf("Exiting Application.\n");
			app_continue = 0;
		}

	}

	wait_for_user_input();
	return 0;
}



int display_menu(void)
{
	printf("Display All records    ----> 1\n");
	printf("Add a new record       ----> 2\n");
	printf("Delete a record        ----> 3\n");
	printf("Exit Application       ----> 0\n");
	printf("Enter your option here :");
	int input;
	scanf("%d",&input);
	return input;
}


void decode_menu(int8_t input)
{
	int8_t ret; // for retrun value from various functions
	switch(input)
	{
	case 1:
		printf("\nDisplaying all students record.\n");
		display_all_records(students,max_record);
		break;
	case 2:
		printf("\nAdding a new record\n");
		ret = add_record(students,max_record);
		ret ? printf("Record Added Successfully\n"):printf("Record Add Unsuccessful\n");
		break;
	case 3:
		printf("\nDeleting the record.\n");
		ret = delete_record(students,max_record);
		ret ? printf("Record Deleted Successfully\n"):printf("Record Not Found\n");
		break;
	default:
		printf("Invalid input");
	}

}
void display_all_records(STUDENT_INFO_t *pBaseAddrRecords,uint8_t max_record)
{

	// if the record exists or not
	int8_t record_found = 0;

	for(uint32_t i = 0;i< max_record ; i++)
	{
		if(pBaseAddrRecords[i].rollNumber) // since empty records will have roll number as 0
		{
			record_found = 1;
			printf("**************************************\n");
			printf("Roll Number   :%d\n",pBaseAddrRecords[i].rollNumber);
			printf("Name          :%s\n",pBaseAddrRecords[i].name);
			printf("Date of Birth :%s\n",pBaseAddrRecords[i].dob);
			printf("Branch        :%s\n",pBaseAddrRecords[i].branch);
			printf("Semester      :%d\n",pBaseAddrRecords[i].semester);
			printf("**************************************\n");
		}


	}
	if(!record_found)
		printf("No record Found\n");// since not once the record_found is 1 means no record exist

}


// this function is used to check whether the roll number inputted exists in the records or not
int check_roll_number(STUDENT_INFO_t *pBaseAddrRecords,uint8_t max_record,int32_t roll_number)
{
	int exist = 0;
	// check all records to see a match
	for(uint32_t i =0;i < max_record ;i++)
	{
		if(pBaseAddrRecords[i].rollNumber == roll_number)
		{
			exist = 1;// matches. Roll no already exists
			break;
		}
	}
	return exist;
}


/*
 * This function adds a new record by asking various information from the user.
 * before adding a record , function has to identify an empty node
 * Assume a node is empty , if roll number field of node is zero*/
int add_record(STUDENT_INFO_t *pBaseAddrRecords,uint8_t max_record)
{
	int add_status= 0;// returned by the function.1 if added succesfully,0 if not
	int is_exist= 0;//will use check_roll_number to see if it exists already
	int32_t roll_number; // new roll number given by the user to add
	uint32_t i = 0; // counter to check how much space is occupied
	/* loop will run for 10 iterations and see if any one is empty record i.e. roll no is 0
	if that is the case we have space and will allow the user to enter a new record else not*/
	for(i =0;i< max_record; i++) // check all records.

	{
		if(!pBaseAddrRecords[i].rollNumber)// meaning when empty record hit (roll no:0) we will enter a new record
		{
			// add the record
			printf("Enter the Roll Number:");
			scanf("%d",&roll_number);
			// now check if the roll_number is not duplicate
			is_exist = check_roll_number(students,max_record,roll_number);
			if(!is_exist){
				add_status = 1;// since not duplicate. Will add the new record
				pBaseAddrRecords[i].rollNumber = roll_number;
				printf("Enter the Name          :");
				getchar();
				scanf("%50[^\n]s",pBaseAddrRecords[i].name);
				printf("Enter the Date of Birth :");
				getchar();
				scanf("%50[^\n]s",pBaseAddrRecords[i].dob);
				printf("Enter the Branch        :");
				getchar();
				scanf("%50[^\n]s",pBaseAddrRecords[i].branch);
				printf("Enter the Semester      :");
				getchar();
				scanf("%d",&pBaseAddrRecords[i].semester);


			}else{
				printf("Roll Number Already Exists!!\n");
			}
			break;
		}

	}
	if (i == max_record)
	{
		printf("No Space Available.\n");
	}
	return add_status;
}

/*
 * Delete a record.
 * first ask the user to enter the roll number of the student
 * delete a node against that roll number
 * return values : 0 if node not found, 1 if node found & delete successful
 */
int delete_record(STUDENT_INFO_t *pBaseAddrRecords,uint8_t max_record)
{
	int delete_status = 0;
	int32_t roll_number; // the roll number we want to delete

	printf("Enter the Roll Number:");
	scanf("%d",&roll_number);
	for (uint32_t i = 0;i < max_record; i++)
	{
		// check if the roll number exists
		if(pBaseAddrRecords[i].rollNumber == roll_number)
		{
			memset(&pBaseAddrRecords[i],0,sizeof(STUDENT_INFO_t));
			delete_status = 1;
			break;
		}
	}
	return delete_status;
}

void wait_for_user_input(void)
{
	printf("Press Enter to exit application.\n");
	while(getchar() != '\n')
	{
	}
	getchar();
}
