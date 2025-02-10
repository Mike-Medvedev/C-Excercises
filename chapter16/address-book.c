#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_NAME_LENGTH 30
#define PHONE_NUM_LENGTH 12
#define MAX_CONTACTS_LENGTH 100

int size = 0;
char ch;
typedef struct {

    char first_name[MAX_NAME_LENGTH];
    char last_name[MAX_NAME_LENGTH];
    char phone_number[PHONE_NUM_LENGTH];

} Contact;
Contact contacts[MAX_CONTACTS_LENGTH];

void add_contact(void);
void list_contacts(void);
void search_contact(void);
void update_contact();
void delete_contact();
int strcmp_lower(char str[], char str2[]);
void to_lower_string(char str[]);
/**
 * Create an address book using arrays and structs
 */
int main(){
    
    while(ch != 'q'){
        printf("\n\n~~~~~~Welcome to the address book!~~~~~~~~~\n\n");
        printf("Please refer to the following menu for options: \n");
        printf("Press 1: Add a new contact\n");
        printf("Press 2: List all contacts\n");
        printf("Press 3: Search a contact\n");
        printf("Press 4: Update a contact\n");
        printf("Press 5: Delete a contact\n");
        printf("Press q to exit!\n");
        scanf(" %c", &ch);
        switch(ch){
            case '1': add_contact(); break;
            case '2': list_contacts(); break;
            case '3': search_contact(); break;
            case '4': update_contact(); break;
            case '5': delete_contact(); break;
            default: printf("Please enter a valid option"); break;
        }
    }
    
}


void add_contact(){
    Contact contact;
    printf("Please enter a first name: ");
    scanf("%s", contact.first_name);
    printf("Please enter a last name: ");
    scanf("%s", contact.last_name);
    printf("Please enter a phone number: ");
    scanf("%s", contact.phone_number);

    contacts[size++] = contact;
    //now add contact to the array
}
void list_contacts(void){
    for(int i = 0; i < size; i++){
        printf("Person %d: ", i);
        printf("%s %s %s\n", contacts[i].first_name, contacts[i].last_name, contacts[i].phone_number);
    }
}
void search_contact(){
    char ch2, search_term[MAX_NAME_LENGTH];
    printf("Please choose from this menu which identifier to search by\n");
    printf("Press 1: Search by first name\n");
    printf("Press 2: Search by last name\n");
    printf("Press 3: Search by phone number\n");

    scanf(" %c", &ch2);
    switch(ch2){
        case '1': 
        printf("Please enter the first name to search by: ");
        scanf("%s", search_term);
        for(int i = 0; i < size; i++){
            if(strcmp_lower(search_term, contacts[i].first_name) == 0){
                printf("Contact found: %s\n %s\n %s\n", contacts[i].first_name, contacts[i].last_name, contacts[i].phone_number);
                return;
            }
        }
        printf("No Contacts found");
        break;
        case '2':
        printf("Please enter the last name to search by: ");
        scanf("%s", search_term); 
        for(int i = 0; i < size; i++){
            if(strcmp_lower(search_term, contacts[i].last_name) == 0){
                printf("Contact found: %s\n %s\n %s\n", contacts[i].first_name, contacts[i].last_name, contacts[i].phone_number);
                return;
            }
        }
        printf("No Contacts found");
        break;
        case '3': 
        printf("Please enter the phone number to search by: ");
        scanf("%s", search_term); 
        for(int i = 0; i < size; i++){
            if(strcmp(search_term, contacts[i].phone_number) == 0){
                printf("Contact found: %s\n %s\n %s\n", contacts[i].first_name, contacts[i].last_name, contacts[i].phone_number);
                return;
            }
        }
        printf("No Contacts found");
        break;
        default: printf("Invalid Option"); break;
    }
}

void update_contact() {
    char search_term[MAX_NAME_LENGTH];
    int found = -1;

    printf("Enter the first name of the contact you want to update: ");
    scanf("%s", search_term);

    for (int i = 0; i < size; i++) {
        if (strcmp_lower(search_term, contacts[i].first_name) == 0) {
            found = i; 
            break;
        }
    }

    if (found == -1) {
        printf("No contact found with that name.\n");
        return;
    }

    char option;
    printf("What would you like to update?\n");
    printf("Press 1: First Name\n");
    printf("Press 2: Last Name\n");
    printf("Press 3: Phone Number\n");
    scanf(" %c", &option);

    switch (option) {
        case '1':
            printf("Enter new first name: ");
            scanf("%s", contacts[found].first_name);
            break;
        case '2':
            printf("Enter new last name: ");
            scanf("%s", contacts[found].last_name);
            break;
        case '3':
            printf("Enter new phone number: ");
            scanf("%s", contacts[found].phone_number);
            break;
        default:
            printf("Invalid option.\n");
            return;
    }

    printf("Contact updated successfully!\n");
}

void delete_contact() {
    char search_term[MAX_NAME_LENGTH];
    int found = -1;

    printf("Enter the first name of the contact to delete: ");
    scanf("%s", search_term);


    for (int i = 0; i < size; i++) {
        if (strcmp_lower(search_term, contacts[i].first_name) == 0) {
            found = i;
            break;
        }
    }

    if (found == -1) {
        printf("No contact found with that name.\n");
        return;
    }


    for (int i = found; i < size - 1; i++) {
        contacts[i] = contacts[i + 1]; 
    }

    size--; 
    printf("Contact deleted successfully!\n");
}


int strcmp_lower(char str[], char str2[]){
    to_lower_string(str);
    to_lower_string(str2);
    return strcmp(str, str2);
}

void to_lower_string(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]); 
    }
}