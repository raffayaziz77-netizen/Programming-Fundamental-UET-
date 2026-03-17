 #include<iostream>
 using namespace std;
 main()
 {   
    int count,i;
    float c1=0,c2=0,c3=0,c4=0,c5=0,n;
    cout<<"Enter a number count: ";cin>>count;
    for (i = 1; i<=count ;i++)
    {
        cout<<"Enter a number: ";cin>>n;
        if (n<200)
        {
            c1++;
        }
        else if (n>=200&&n<400)
        {
            c2++;
        }
        else if (n>=400&&n<600)
        {
            c3++;
        }
        else if (n>=600&&n<800)
        {
            c4++;
        }
        else
        {
            c5++;
        }   
    }
    cout<< (c1/count)*100 <<endl;
    cout<< (c2/count)*100 <<endl;
    cout<< (c3/count)*100 <<endl;
    cout<< (c4/count)*100 <<endl;
    cout<< (c5/count)*100 <<endl;
 }
