#include <iostream>

using namespace std;

int main()
{
    double merchCost;
    double rentStore;
    double employeeSalary;
    double electricityCost;
    cout<<"enter the merchendise cost:"<<endl;
    cin>>merchCost;
    cout<<"enter the rent store money:"<<endl;
    cin>>rentStore;
    cout<<"enter the employee salary:"<<endl;
    cin>>employeeSalary;
    cout<<"enter the total cost of electricity:"<<endl;
    cin>>electricityCost;

    double totalCost=merchCost+rentStore+employeeSalary+electricityCost;
    cout<<"the totalcost is "<<totalCost<<endl;
    double netProfitDesired = merchCost*0.1;
    cout<<"the total profit desired is: "<<netProfitDesired<<endl;
    double newNetProfit = netProfitDesired/0.85;
    cout<<"the new net profit accumulated: "<<endl;
    double markUp = (newNetProfit+totalCost)/merchCost;
    cout<<"the total markup is therefore:"<<markUp<<endl;
    return 0;
}
