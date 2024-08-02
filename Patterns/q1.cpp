#include <iostream>
using namespace std;

void pattern1(int n){

// *****
// *****
// *****
// *****
// *****

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern2(int n){

// *
// * *
// * * *
// * * * *

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern3(int n){

// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern4(int n){

//     *
//    **
//   ***
//  ****
// *****

    for(int i=1; i<=n; i++){
        for(int j=n; j>=1; j--){
            if(i>=j){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void pattern5(int n){

//     *
//    * *
//   * * *
//  * * * *
// * * * * *

    for(int i=1; i<=n; i++){
        for(int j=n; j>=1; j--){
            if(i>=j){
                cout<<"* ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void pattern6(int n){

// * * * * *
// * * * *
// * * *
// * *
// *

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j>=i){
                cout<<"* ";
            }
        }
        cout<<endl;
    }
}

void pattern7a(int n){

//     *
//    * *
//   *   *
//  *     *
// *       *

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for(int j=0; j<2*i+1; j++){
            if(j==0||j==2*i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void pattern7b(int n){

// *       *
//  *     *
//   *   *
//    * *
//     *

    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=0; j<(2*n-2*i-1); j++){
            if(j==0||j==2*n-2*i-1-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void pattern8(int n){

// * * * * * * * * * *
// * * * *     * * * *
// * * *         * * *
// * *             * *
// *                 *
// *                 *
// * *             * *
// * * *         * * *
// * * * *     * * * *
// * * * * * * * * * *

    // for upper part
    for(int i=0; i<n; i++){
        for(int j=0; j<(n-i); j++){
            cout<<"* ";
        }
        for(int j=0; j<2*i; j++){
           cout<<"  ";
        }
        for(int j=0; j<(n-i); j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    // for lower part
    for(int i=0; i<n; i++){
        for(int j=0; j<(i+1); j++){
            cout<<"* ";
        }
        for(int j=0; j<(2*n-2*i-2); j++){
           cout<<"  ";
        }
        for(int j=0; j<(i+1); j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern9(int n){

// * * * * *
// *       *
// *       *
// *       *
// * * * * *

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0 || j==0 || i==n-1 || j==n-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    
}

void pattern10(int n){

// * * * * * *
// *       *
// *     *
// *   *
// * *
// *

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(i==0 || j==0 || j==n-i-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    
}

void pattern11(int n) {

//     *
//    * *
//   *   *
//  *     *
// *********

    for(int i=0; i<n; i++) {

        for(int j=0; j<(n-i-1); j++) {
            cout << " ";
        }
        for(int j=0; j<(2*i+1); j++) {
            if( i==n-1 || j==0 || j==2*i+1-1) {
                cout<<"*";
            } 
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void pattern12(int n) {

//   *
//   *
// *****
//   *
//   *

    for(int i=0; i<n; i++) {

        for(int j=0; j<n; j++) {
            if(i==n/2 || j==n/2){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void pattern13(int n) {

// *   *
//  * *
//   *
//  * *
// *   *

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            if (i == j || i + j == n - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void pattern14(int n) {

// * - - - -
// - * - - -
// - - * - -
// - - - * -
// - - - - *

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
           if(i==j){
            cout<<"* ";
           }
           else{
            cout<<"- ";
           }
        }
        cout << endl;
    }
}

void pattern15(int n) {

// 0 0 * 0 0
// 0 0 * 0 0
// * * * * *
// 0 0 * 0 0
// 0 0 * 0 0

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
           if(i==n/2 || j==n/2){
            cout<<"* ";
           }
           else{
            cout<<"0 ";
           }
        }
        cout << endl;
    }
}

void pattern16(int n) {

// * * * * *
// * # # # *
// * # # # *
// * # # # *
// * * * * *

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i==0 || j==0 || i==n-1 || j==n-1){
                cout<<"* ";
            }
            else{
                cout<<"# ";
            }
        }
        cout << endl;
    }
}


// star , number, alpahbet mix questions

void pattern17(int n) {

// 1 
// 2*2 
// 3*3*3 
// 4*4*4*4 
// 5*5*5*5*5 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i+1; j++) {
            cout<<i+1;
          if(j!=i){
            cout<<"*";
          }
          else{
            cout<<" ";
          }
        }
        cout << endl;
    }
}

void pattern18(int n) {

// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

    for (int i = 1; i <= 2*n-1; ++i) {

// If i is less than or equal to n, the number of stars is equal to i.
// If i is greater than n, the number of stars is equal to 2*n - i
        int stars = i<=n ? i : 2*n - i;

        for (int j = 1; j <= stars; ++j) {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern19(int n) {

// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

    for (int i=0; i<n; i++) {
        for(int j=0; j<=i; j++){
            if((i+j)%2==0){
                cout<<"1"<<" ";
            }
            else{
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }
}

void pattern20(int n) {

// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321

    for (int i=0; i<n; i++) {
        int count=1;
        for(int j=0; j<i+1; j++){
            cout<<count;
            count++;
        }
        for(int j=0; j<(2*n-2*i-2); j++){
            cout<<" ";
        }
        for (int j=i+1; j>0; j--) {
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern21(int n) {

// A
// A B
// A B C
// A B C D
// A B C D E

    for (int i=0; i<n; i++) {
        char ch = 'A' ;
        for(int j=0; j<i+1; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}

void pattern22(int n) {

// A B C D
// A B C
// A B
// A

    for (int i=0; i<n; i++) {
        for(int j=0; j<(n-i); j++){
            cout<<char('A'+j)<<" ";  
        }
        cout<<endl;
    }
}

void pattern23(int n) {

// A
// B B
// C C C
// D D D D

    for (int i=0; i<n; i++) {
        char ch = 'A' + i;
        for(int j=0; j<i+1; j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern24(int n) {

//     A       
//    ABA      
//   ABCBA     
//  ABCDCBA    
// ABCDEDCBA 

    for(int i=0; i<n; i++){

        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        //increasing part
        for(int j=0; j<i+1; j++){
            cout<<char('A' + j);
        }
        // decreasing part
        for(int j=i-1; j>=0; j--){
            cout<<char('A' + j);
        }
        cout<<endl;
    }
}

void pattern25(int n) {

        // ---------
        //         |
        //         |
        // ---------
        // |
        // |
        // |

        // *
}

int main(){

        int n;
        cin>>n;
        // pattern1(n);
        // pattern2(n);
        // pattern3(n);
        // pattern4(n);
        // pattern5(n);
        // pattern6(n);
        // pattern7a(n);
        // pattern7b(n);

        // pattern7a(n);
        // pattern7b(n);

        // pattern8(n);
        // pattern9(n);
        // pattern10(n);
        // pattern11(n);
        // pattern12(n);
        // pattern13(n);
        // pattern14(n);
        // pattern15(n);
        // pattern16(n);
        // pattern17(n);
        // pattern18(n);
        // pattern19(n);
        // pattern20(n);
        // pattern21(n);
        // pattern22(n);
        // pattern23(n);
        // pattern24(n);
        // pattern25(n);

    
}