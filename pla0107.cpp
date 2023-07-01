// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

// tell a string can become a palindrome or not
bool canBePalindrome(string s)
{
    int len = s.length();
    unordered_map<char, int> mp;
    int check = 0;
    for (int i = 0; i < len; i++)
    {
        mp[s[i]]++;
    }

    for (auto i : mp)
    {
        if (i.second % 2 != 0)
        {
            check++;
        }
        if (check > 1)
            return false;
    }
    return true;
}

// return how many carry will be there when we add two numbers
int carryCount(int n1, int n2)
{
    int r1, r2;
    int carry_count = 0;
    int carry = 0;

    while (n1 != 0 && n2 != 0)
    {
        r1 = n1 % 10;
        r2 = n2 % 10;
        // cout<<"r1 is "<<r1<<" r2 is "<<r2<<endl;
        if (r1 + r2 + carry >= 10)
        {
            carry_count++;
            carry = 1;
            // cout<<"carry_count  is "<<carry_count<<endl;
        }
        else
            carry = 0;
        n1 = n1 / 10;
        n2 = n2 / 10;
        // cout<<"n1 is "<<n1<<" n2 is "<<n2<<endl;
    }
    // cout<<"carry_count  is "<<carry_count<<" carry is "<<carry <<endl;

    while (n1 != 0 && carry == 1)
    {
        r1 = n1 % 10;
        if (r1 + carry >= 10)
        {
            carry_count++;
            carry = 1;
        }
        else
            carry = 0;
        n1 = n1 / 10;
    }
    while (n2 != 0 && carry == 1)
    {
        r2 = n2 % 10;
        if (r2 + carry >= 10)
        {
            carry_count++;
            carry = 1;
        }
        else
            carry = 0;
        n2 = n2 / 10;
    }

    return carry_count;
}

//----------------- LL Question -------------------

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

void insertatTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void printMiddleElement(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return;
    }

    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        cout << "slow data " << slow->data << " fast  data " << fast->data << endl;
    }

    cout << "Middle element data is " << slow->data << endl;
}

void deletingAlternateNode(Node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return;
    }

    Node *temp = head;
    while (temp != NULL && temp->next != NULL)
    {
        temp->next = temp->next->next;
        temp = temp->next;
    }
}

bool aharshadNumber(int n){
    int sum=0;
    int temp=n;
    while(temp!=0){
        sum+=temp%10;
        temp/=10;
    }
    
    if(n%sum==0)return true;
    else return false;
}

int main()
{
    // Node *node1 = new Node(10);
    // Node *head = node1;
    // Node *tail = node1;
    // insertatTail(tail, 20);
    // insertatTail(tail, 30);
    // insertatTail(tail, 40);
    // insertatTail(tail, -50);
    // print(head);
    // // printMiddleElement(head);
    // deletingAlternateNode(head);
    // print(head);

    cout<<aharshadNumber(156);


    // string s="moM";
    // cout<<canBePalindrome(s);

    // cout<<carryCount(9,499);

    return 0;
}

//------------ last question of first half------------------

// package July1;

// import java.util.HashMap;

// /*
//  s1=egg
//  s2=add

//  o/p=true

//  s1=foo
//  s2=Bar
//  */

// public class check {

//     private static boolean Check(String s1, String s2) {
//         HashMap<Character,Character>map=new HashMap<>();
//         if(s1.length()!=s2.length()){
//             return false;
//         }
//         for(int i=0;i<s1.length();i++){
//             if(map.containsKey(s1.charAt(i))){
//                 if(!map.containsValue(s2.charAt(i))){
//                     return false;
//                 }
//             }
//             map.put(s1.charAt(i),s2.charAt(i));

//         }
//         return true;
//     }

//     //main function
//     public static void main(String[] args) {
//         String str1="egg";
//         String str2="add";

//         String str3="foo";
//         String str4="bar";

//         // call the function
//         System.out.println();
//         boolean ans1=Check(str1, str2);
//         System.out.println(ans1);

//         System.out.println();
//         boolean ans2=Check(str3, str4);
//         System.out.println(ans2);
//     }

// }
