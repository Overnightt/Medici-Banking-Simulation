/* Implements the bank process */
#include "bank.h"      
#include "ipc.h"       
#include "utils.h"    
#include <stdio.h>     
#include <stdlib.h>    
#include <string.h>   
#include <stdbool.h>   
#include <pthread.h>   
#include <semaphore.h> 

//The structure of an account
typedef struct {
	int account_id;
	int owner_id;
	int balance;
	char account_name[50];
} Account;

//A global counter for the account id
int next_id = 1;

//I decided to created a linked list to navigate between accounts
typedef struct AccountList {
	Account account;
	struct AccountList* next
}AccountList;

// I start with an empty list of Accounts
AccountList* head = NULL;

int deposit(int account_id,int X){
	return 0;
}

int withdraw(int account_id,int X){
	return 0;
}

int transfer(int account_id,int X){
	return 0;
}

int get_balance(int account_id){
	return 0;
}

//The clients create a new account with this function 
int add_account(int client_id,char name[50]){
	AccountList* new_account=(AccountList*) malloc(sizeof(AccountList));
	if (new_account == NULL){
		perror("Failled to malloc for new account");
		exit;
	}
	new_account->account.account_id = next_id;
	next_id= next_id+1;
	new_account->account.owner_id = client_id;
	new_account->account.balance=0;
	strncpy(new_account->account.account.account_name,name,50);
	new_account->next=head;
	head= new_account;
	return 0;
}

int find_account(int account_id){
	return 0;
}
