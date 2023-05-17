#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct Action
{
    int tstart, tend;
    /* data */
};
bool compare(Action a, Action b){
    return a.tend < b.tend;
}
int main (){
    int n;
    cin >> n;
    vector<Action> a(n);
    for (int i = 0 ; i < n; i++)
        cin >> a[i].tstart >> a[i].tend;
    sort(a.begin(), a.end(), compare);
    int count =  1, end_time = a[0].tend;
    for (int i =  1; i < n; i++)
    {
        if (a[i].tstart >= end_time){
            count++;
            end_time = a[i].tend;
        }
    }
    cout << count << endl;
}