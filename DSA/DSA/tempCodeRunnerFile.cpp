void intersection(int a1[],int a2[],int n1,int n2){
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(a1[i]==a2[j]){
                cout<<a1[i]<<"\t";
                a2[j]=INT_MAX;
            }
        }
    }
}