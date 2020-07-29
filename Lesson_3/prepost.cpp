/*Goal: Practice PreFix and PostFix
**
*/

#include<iostream>

using namespace std;

int main()
{
    int a, b = 0;
    int post, pre = 0;
    cout<<"Inital values: \t\t\tpost = "<<post<<" pre= "<<pre<<"\n";
    post = a++; /* should return 0*/
    pre = ++b; /* Should return 1 */
    cout<<"After one postfix and prefix: \tpost = "<<post<<" pre= "<<pre<<"\n";
    post = a++; /* returns 1 */
    pre = ++b; /* returns 2 */
    cout<<"After two postfix and prefix: \tpost = "<<post<<" pre= "<<pre<<"\n";  

    post = ++a; /* should return 3 */
    pre = b++; /* should return 2 */

    cout <<"Then after switching: \tpost-pre = " << post << " pre-post = "<< pre << "\n";
    return 0;
}
