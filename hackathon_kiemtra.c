#include<stdio.h >
int main(){
	int choice,max,min,n,m,p,sum=0;
	int arr[1000], index, flag=-1,check;
	int size =sizeof(arr)/sizeof(int);
	do {
        printf("\n********MENU*******\n");
        printf("1. nhap cac phan tu va gia tri cho mang \n");
        printf("2. in ra gia tri ca phan tu trong mang theo dang (arr[0]=1,arr[1]=5..)\n");
        printf("3. tim ra gia tri lon nhat va nho nhat trong mang \n");
        printf("4. in ra tong cac phan tu \n");
        printf("5. Them mot phan tu vao cuoi mang, phan tu moi them do nguoi dung nhap vao\n");
        printf("6. xoa mot phan tu trong mang o vi tri cu the\n");
        printf("7. sap xep mang theo thu tu giam dan \n");
        printf("8. cho ng dung nhap phan tu  va tim kiem phan tu trong mang co ton tai hay khong\n");
        printf("9. in ra cac so nguyen to \n");
        printf("10. sap xep mamg theo thu tu tang dan\n");
        printf("11. Thoat\n");
        printf("hay chon chuc nang (1-11): ");
        scanf("%d", &choice);
		switch (choice){
			case 1: 
			printf("moi ban nhap so phan tu do dai trong mang : ");
		    scanf("%d", &n);
			if(n<=0){
				printf(" Moi ban nhap lai du lieu trong mang");
				return 1;
		     	}
			for ( int i = 0 ; i < n ; i++){
			printf("Nhap phan tu thu %d : ",i);
			scanf("%d", &arr[i]);
   			 } 
				break;
			case 2: 
			printf("cac phan tu trong mang la \n");
			for ( int i = 0 ; i < n ; i++){
				printf ( "arr[%d]=%d\n",i, arr[i]);
			}
				break;
			case 3:
		    max = arr[0];
		    min = arr[0];
			for(int i = 1;i < n;i++){
				if(arr[i]>max){
					max = arr[i];
				   }
			    if(min>arr[i]){
			    	min = arr[i];
			    	}
				}
				printf("gia tri %d lon nhat trong mang \n", max);
				printf("gia tri %d nho nhat trong mang ", min);
				break;
			case 4: 
            for(int i=0;i<n;i++){
            	sum+=arr[i];
			}
			printf("tong gia tri cua mang la :%d",sum);
				break;
			case 5:  
			printf("moi ban nhap gia tri phan tu muon them vao cuoi mang :");
			scanf("%d", &m);
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					
				}
			}
			 printf("Mang sau khi them la :\n");
			   for (int i=0;i<n;i++){
			   printf("%d\n", arr[i]);
		    }
			    break;
			case 6:
				printf("nhap vi tri muon xoa phan tu ");
				scanf("%d",&index);
     			for (int i = index; i < n - 1; i++) {
            	arr[i] = arr[i + 1];
       			 }
     		   n--;
     		   printf("Mang truoc khi duoc xoa la :\n ");
			   for (int i=0;i<n;i++){
			   printf("%d\n", arr[i]);
		    }
				 break;
			case 7:  
			printf("Mang truoc khi duoc sap xep la :\n ");
			for (int i=0;i<n;i++){
				printf("%d", arr[i]);
			}
			for(int i=0;i<n;i++){
			   for(int j=0;j<n;j++){
					if(arr[j]<arr[j+1]){
						int temp = arr[j];
						arr[j]=arr[j+1];
						arr[j+1]= temp;
					}
				}
			}
			printf("Mang sau khi duoc sap xep la : ");
			for (int i=0;i<n;i++){
				printf("%d", arr[i+1]);
			}
				break;
			case 8:  
			printf("nhap phan tu ban muon tim kiem : ");
			scanf("%d", &m);
			for(int i=0;i<size;i++){
				if(m == arr[i]){
					flag=i;
					break;
				}
			}if(flag!=-1){
			printf("phan tu nam tai vi tri arr[%d]", flag);
			} else{
				printf("phan tu %d khong nam trong mang",m);
			}
				break;
			case 9: 
			printf("Cac so nguyen to trong mang la: ");
    		for (int i = 0; i < n; i++) {
       		int check = 1; 
        	if (arr[i] <= 1) {
            check = 0;  
            } else {
            for (int j = 2; j * j <= arr[i]; j++) {
                if (arr[i] % j == 0) {
                    check = 0;  
                    break;
                      }
                }
            }
            if (check) {
            printf("%d ", arr[i]);
               }
            }
               printf("\n");
				break;
			case 10: 
			for( int i = 0; i < n-1;i++){
	        int min = i;
            for(int j=i+1;j<n;j++){
	      	if(arr[j]<arr[min]){
			min = j;
		    	}	
	         }
	       if(min != i){
	     	int temp = arr[min];
	    	arr[min]= arr[i];
	    	arr[i]= temp;
	         	}
              }   
			printf("mang cua ban sau khi sap xep la : \n");
			for(int i=0;i<n;i++){
			printf("%d \n", arr[i]);	
			}
			printf("\n");
				break;
			case 11: 
			    printf("da thoat chuong trinh");
				break;
			default:
			printf("moi ban nhap lai du lieu ");
		  }
		} while (choice != 11);
		return 0;
}


