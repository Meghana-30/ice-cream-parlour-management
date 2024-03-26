#include <stdio.h>
    int choice;

     char flavour[20][20]={"Vanilla","Strawberry","Chocolate","Pista","Butterscotch","Mango","Chocovanilla","Coffee","Caramel","Brownie"};

void select(){
      printf("We have 10 flavours for you\n");
      for(int i=0;i<10;i++){
        printf("%d. %s\n",i+1,flavour[i]);
    }

}

int main() {

  printf("Welcome To Ice Cream Parlour\n");
  printf("1.Show menu\n");
  scanf("%d",&choice);
  if(choice==1){
      select();
  }


  return 0;
}
