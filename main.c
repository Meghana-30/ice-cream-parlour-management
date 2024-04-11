// Online C compiler to run C program online

#include <stdio.h>
    int choice;
    int choice2;
    int choice3;
     char flavour[20][20]={"Vanilla","Strawberry","Chocolate","Pista","Butterscotch","Mango","Chocovanilla","Coffee","Caramel","Brownie","Coconut"};
    int price_l[]={30,40,50,50,40,45,40,50,50,60};
    int price_s[]={15,20,25,25,20,25,20,25,25,30};
    int confirm;

void select()
{
      int num=1;
  while (num!=0){
  switch(choice){
      case 1:
      printf("We have 10 flavours for you\n");
      for(int i=0;i<10;i++){
        printf("%d. %s\n",i+1,flavour[i]);
      }
        printf("select your choice: \n");
        scanf("%d",&choice2);
      if(choice2==1 || choice2==2 ||  choice2==3 ||  choice2==4 ||  choice2==5 ||  choice2==6 ||  choice2==7 ||  choice2==8 ||  choice2==9 ||  choice2==10  ){
        //   printf("You chose %s",flavour[choice2-1]);
          printf("Select the size \n1.Small \n2.Large\n");
           scanf("%d",&choice3);
           if(choice3==1){
               printf("You chose small size %s ice-cream \nIt costs Rs.%d\n",flavour[choice2-1],price_s[choice2-1]);
           }
           else if(choice3==2){
                printf("You chose large size %s ice-cream \nIt costs Rs.%d\n",flavour[choice2-1],price_l[choice2-1]);
           }
           else{
                printf("invalid option \nretry with valid option\n");
                break;
           }


          printf("Confirm your order\n 1.confirm\n 2.cancel\n");
          scanf("%d",&confirm);
          if(confirm==1){
              printf("your order confirmed\n Thank you visit us again\n");
                num=0;

          }
          else{
              printf("As you cancelled, Do u want select another flavour\n");
              printf("1.Yes\n2.exit\n");
              int reorder;
              scanf("%d",&reorder);
              if(reorder==1){

              }
              else{
                  num=0;
                  printf("Thank you visit us again\n");
              }
          }
      }
      else{
          printf("invalid option \nretry with valid option\n\n");
      }
      break;
      case 2:
      printf("Thank u visit us again\n");
      num=0;
      break;
      default:
      printf("invalid option");
       num=0;
      break;


  }

//   printf("%d",choice);

  }
}


int main() 
{

    // printf("%s\n",flavour[1]);

  printf("Welcome To Ice Cream Parlour\n");
  printf("1.Show menu\n");
  printf("2.exit\n");
  scanf("%d",&choice);
  if(choice==1){
      select();
  }
  else{
      printf("Thank you visit us again\n");
  }

  return 0;
}
 
