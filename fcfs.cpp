#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter How many Process: ";
    cin >> n;

    int Burst_Time[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Enter Burst Time of Process - " << i + 1 << " :";
        cin >> Burst_Time[i];
    }

    int waiting_time = 0;
    int total_waiting_time = 0;
    for(int i = 0; i < n; i++)
    {
        cout << "Waiting time of Process - " << i + 1 << " :" << waiting_time << endl;
        waiting_time += Burst_Time[i];
        total_waiting_time += waiting_time;
    }

    cout<<"Average Waiting Time"<<(total_waiting_time-waiting_time)/float(n);
    return 0;
}

