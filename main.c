//
//  main.c
//  infestPath
//
//  Created by Juyeop Kim on 2022/10/20.
//

#include <stdio.h>
#include <string.h>
#include "ifct_element.h"
#include "ifct_database.h"

#define MENU_PATIENT        1
#define MENU_PLACE          2
#define MENU_AGE            3
#define MENU_TRACK          4
#define MENU_EXIT           0

#define TIME_HIDE           2


int trackInfester(int patient_no, int *detected_time, int *place); //�Լ� ����  
int main(int argc, const char * argv[]) {
    
    int menu_selection;
    void *ifct_element; //�������� void������ 
    FILE* fp; //���� ����� 
    int pIndex, age, time;
    int placeHist[N_HISTORY];
    int p_num, max_age, min_age; 
    
    //------------- 1. loading patient info file ------------------------------
    //1-1. FILE pointer open
    
    if (argc != 2)
    {
        printf("[ERROR] syntax : infestPath (file path).");
        return -1;
    }
    
    fp = fopen(argv[1],"r");
    if (fp == NULL)
    {
        printf("[ERROR] Failed to open database file!! (%s)\n", argv[1]);
        return -1;
    }
    
    //1-2. loading each patient informations
	int ifctdb_addTail(void* obj);
    //1-3. FILE pointer close
    fclose(fp);
    
    do {
        printf("\n=============== INFECTION PATH MANAGEMENT PROGRAM (No. of patients : %i) =============\n", ifctdb_len());
        printf("1. Print details about a patient.\n");                      //MENU_PATIENT
        printf("2. Print list of patients infected at a place.\n");        //MENU_PLACE
        printf("3. Print list of patients in a range of age.\n");          //MENU_AGE
        printf("4. Track the root of the infection\n");                     //MENU_TRACK
        printf("0. Exit.\n");                                               //MENU_EXIT
        printf("=============== ------------------------------------------------------- =============\n\n");
        
        printf("Select a menu :");
        scanf("%d", &menu_selection);
        fflush(stdin);
        
        switch(menu_selection)
        {
            case MENU_EXIT:
                printf("Exiting the program... Bye bye.\n");
                break;
                
            case MENU_PATIENT:
                printf("Enter the patient number: ");
                scanf("%i",&p_num);
                //printf("");�ѹ��� �´� ȯ�� ���� ȣ�� 
                
                break;
                
            case MENU_PLACE:
                //
                break;
                
            case MENU_AGE:
                printf("Enter the max age: ");
                scanf("%i",&max_age);
                printf("Enter the min age: ");
                scanf("%i",&min_age);
                if(age<max_age&&age>min_age){
                	printf("%i",patient_number)
				}
                break;
                
            case MENU_TRACK:
                    /* N�� ������
					for(i=4;i>0;i--)
						if(N-4==����Ȯ������)
							if(���� Ȯ�� ��� ���==N�� ������ N-4�� ��ġ)
							������ �߰�, break;  
							�������� ������� �ٽ� ���� 
					  */
				while()
                break;
                
            default:
                printf("[ERROR Wrong menu selection! (%i), please choose between 0 ~ 4\n", menu_selection);
                break;
        }
    
    } while(menu_selection != 0);
    
    
    return 0;
}

int trackInfester(int patient_no, int *detected_time, int *place){
	
}
