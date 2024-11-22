#include <stdlib.h>
#include <stdio.h>

int find_index(int n,int a[n],int key){
	for(int i=0;i<n;i++){
		if (a[i]==key){
		return i;
		
		}
	}
	return -1;
}

int* find_pointer(int n,int a[n],int key){
	for(int i=0;i<n;i++){
                if (a[i]==key){
                return &a[i];

                }
        }
        return NULL;

}

int count(int n,int a[n],int key){
	int count=0;
        for(int i=0;i<n;i++){
                if (i==key){
                count++;

                }
        }
        return count;
}

int count2d(int n, int m, int a[n][m],int key){
	int count=0;
        for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
			if (a[i][j]==key){
               			count++;

                	}
		}
        }
        return count;


}
void main(){
	int n=3;
	int m=2;
	int b[][]={{1,2,3},{1,2,3}};
	int a[]={1,2,3};
	printf("%d\n",find_index(n,a,3));
	printf("%d\n",find_pointer(n,a,3));
        printf("%d\n",count(n,a,3));
	printf("%d\n",count2d(n,m,b,3));
}


