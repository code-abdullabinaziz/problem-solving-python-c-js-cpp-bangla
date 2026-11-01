Objective

This challenge will help you to learn how to take a character, a string and a sentence as input in C.

To take a single character  as input, you can use scanf("%c", &ch ); and printf("%c", ch) writes a character specified by the argument char to stdout

char ch;
scanf("%c", &ch);
printf("%c", ch);
This piece of code prints the character .

You can take a string as input in C using scanf(“%s”, s). But, it accepts string only until it finds the first space.

In order to take a line as input, you can use scanf("%[^\n]%*c", s); where  is defined as char s[MAX_LEN] where  is the maximum size of . 
Here, [] is the scanset character. ^\n stands for taking input until a newline isn't encountered. 
Then, with this %*c, it reads the newline character and here, the used * indicates that this newline character is discarded.

Note: The statement: scanf("%[^\n]%*c", s); will not work because the last statement will read a newline character, \n, from the previous line.
This can be handled in a variety of ways. One way is to use scanf("\n"); before the last statement.

Task

You have to print the character, , in the first line. Then print  in next line. In the last line print the sentence, .

Input Format

First, take a character,  as input.
Then take the string,  as input.
Lastly, take the sentence  as input.

Constraints

Strings for  and  will have fewer than 100 characters, including the newline.

Output Format

Print three lines of output. The first line prints the character, .
The second line prints the string, .
The third line prints the sentence, .

Sample Input 0

C
Language
Welcome To C!!
Sample Output 0

C
Language
Welcome To C!!



#include <stdio.h>
#include <string.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char ch;
    char s[100];
    char sen[100];
    
    scanf("%c", &ch);
    scanf("%s", s);
    
    scanf("\n");
    scanf("%[^\n]%*c", sen);

    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);

    return 0;    
}


১. scanf("%c", &ch); → একটিমাত্র ক্যারেক্টার রিড করে। তবে এর পরে கீবোর্ডের এন্টার বা \n মেমরি বাফারে থেকে যায়।
    
২. scanf("%s", s); → %s-এর নিজস্ব বৈশিষ্ট্য হলো এটি সামনের যেকোনো হোয়াইটস্পেস বা নিউলাইন (\n) নিজে থেকেই স্কিপ বা ইগনোর করে।
    
তাই এটি প্রথম শব্দটি ধরে ফেলে, কিন্তু এর নিজের শেষেও একটি \n রেখে দেয়।
    
৩. scanf("\n"); এবং scanf("%[^\n]%*c", sen); → ঠিক এই জায়গাতেই কোডের চালাকিটি কাজ করেছে! 
    
আগের লাইনের রেখে যাওয়া নিউলাইন বা ফাঁকা জায়গাগুলো scanf("\n") দিয়ে পরিষ্কার করে নেওয়া হয়েছে। 
    
এরপর %[^\n] ব্যবহার করার কারণে এটি শুধু একটি শব্দ নয়, বরং স্পেসসহ পুরো লাইনটি (sen) সফলভাবে রিড করতে পারে এবং %*c দিয়ে শেষের বাড়তি ক্যারেক্টারটি ফেলে দেয়।




১. Sum of Digits of a Five Digit Number (ম্যাথমেটিক্যাল লজিক ও ডিজিট এক্সট্রাকশন)

একটি ৫ ডিজিটের সংখ্যা ইনপুট নিয়ে এর প্রতিটি অঙ্কের (Digits) যোগফল বের করতে হবে। এটি গাণিতিক লজিক এবং মডিউলাস (%) ও ডিভিশন (/) অপারেটরের ব্যবহার পোক্ত করবে।

কী করতে হবে:

৫ অঙ্কের একটি ইন্টিজার সংখ্যা ইনপুট নিতে হবে (যেমন: 12345)।

কাজের ধাপ:

লজিক খাটিয়ে সংখ্যাটির প্রতিটা অঙ্ক আলাদা করতে হবে (1 + 2 + 3 + 4 + 5)।

সবগুলোর যোগফল প্রিন্ট করতে হবে।

টেস্ট ইনপুট: 10564

কাঙ্ক্ষিত আউটপুট: 16 (কারণ: ১ + ০ + ৫ + ৬ + ৪ = ১৬)


#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // যেমন ইনপুট নিলাম: 12345
    
    int sum = 0;
    
    // প্রতিবার শেষ অঙ্ক বের করে যোগ করব এবং সংখ্যাটিকে ছোট করব
    
    sum += n % 10;   // শেষ অঙ্ক ৫ যোগ হলো, n = 12345 % 10 = 5
    n = n / 10;      // n এখন হলো 1234
    
    sum += n % 10;   // শেষ অঙ্ক ৪ যোগ হলো, sum = 5 + 4 = 9
    n = n / 10;      // n এখন হলো 123
    
    sum += n % 10;   // শেষ অঙ্ক ৩ যোগ হলো, sum = 9 + 3 = 12
    n = n / 10;      // n এখন হলো 12
    
    sum += n % 10;   // শেষ অঙ্ক ২ যোগ হলো, sum = 12 + 2 = 14
    n = n / 10;      // n এখন হলো 1
    
    sum += n % 10;   // শেষ অঙ্ক ১ যোগ হলো, sum = 14 + 1 = 15
    n = n / 10;      // n এখন হলো 0
    
    // ফাইনাল যোগফল প্রিন্ট করা
    printf("%d\n", sum);

    return 0;
}



• int n; scanf("%d", &n);

	• মেমরিতে n নামের একটি ইন্টিজার ভ্যারিয়েবল তৈরি হলো এবং ইউজার ইনপুট দিল n = 12345।
• int sum = 0;

	• যোগফল রাখার জন্য sum নামের ভ্যারিয়েবল নেওয়া হলো এবং এর শুরুর মান দেওয়া হলো sum = 0।

লাইন বাই লাইন ড্রাই রান (Step-by-Step Execution):

ধাপ ১: শেষ অঙ্ক ৫ বের করা ও যোগ করা

1. sum += n % 10;
	• 12345 % 10 করলে ভাগশেষ থাকে 5 (শেষ অঙ্ক)।
	• sum = 0 + 5 = 5।
        
2. n = n / 10;
	• 12345 / 10 করলে ভাগফল হয় 1234.5, কিন্তু যেহেতু n একটি ইন্টিজার, তাই দশমিকের পরের অংশ বাদ যাবে।
	• নতুন মান: n = 1234।
ধাপ ২: শেষ অঙ্ক ৪ বের করা ও যোগ করা
        
3. sum += n % 10;
• 1234 % 10 করলে ভাগশেষ থাকে 4।
• sum = 5 + 4 = 9।
    
4. n = n / 10;
	• 1234 / 10 করলে নতুন মান হয়: n = 123।
ধাপ ৩: শেষ অঙ্ক ৩ বের করা ও যোগ করা
        
5. sum += n % 10;
• 123 % 10 করলে ভাগশেষ থাকে 3।
• sum = 9 + 3 = 12।
    
6. n = n / 10;
	• 123 / 10 করলে নতুন মান হয়: n = 12।
ধাপ ৪: শেষ অঙ্ক ২ বের করা ও যোগ করা
        
7. sum += n % 10;
• 12 % 10 করলে ভাগশেষ থাকে 2।
• sum = 12 + 2 = 14।
    
8. n = n / 10;
	• 12 / 10 করলে নতুন মান হয়: n = 1。
ধাপ ৫: শেষ অঙ্ক ১ বের করা ও যোগ করা
        
9. sum += n % 10;
• 1 % 10 করলে ভাগশেষ থাকে 1।
• sum = 14 + 1 = 15।
    
10. n = n / 10;
	• 1 / 10 করলে ভাগফল হয় 0.1। ইন্টিজার হওয়ার কারণে দশমিক বাদ গিয়ে নতুন মান হয়: n = 0।

ফাইনাল আউটপুট:

• printf("%d\n", sum);

	• স্ক্রিনে sum-এর সর্বশেষ মান অর্থাৎ 15 প্রিন্ট করবে।

        
ছোট পরামর্শ:

এই কোডটি শুধুমাত্র নির্দিষ্ট করে ৫ অঙ্কের সংখ্যার জন্যই কাজ করবে। সংখ্যাটি যদি ছোট বা বড় হয় (যেমন ৩ অঙ্ক বা ৬ অঙ্কের), 
        
তখন কোডটি সঠিক উত্তর দেবে না। কোডটিকে যেকোনো সংখ্যার জন্য কার্যকর করতে চাইলে এই একই কাজ একটি while loop ব্যবহার করে করা ভালো। যেমন:




অলটারনেটিভ উপায় (লুপ ব্যবহার করে):
    
যেহেতু বারবার একই কাজ (% 10 এবং / 10) করা লাগছে, তাই চাইলে এটি খুব সহজে একটি while লুপ দিয়েও করা যাবে এতে কোড অনেক ছোট হয়:


#include <stdio.h>

int main() {
    int n, sum = 0;
    
    printf("যেকোনো একটি সংখ্যা লিখুন: ");
    scanf("%d", &n);
    
    // সংখ্যাটি ঋণাত্মক (Negative) হলে সেটিকে ধনাত্মক করে নেওয়া ভালো
    if (n < 0) {
        n = -n;
    }

    // while loop ব্যবহার করে অঙ্কগুলোর যোগফল বের করা
    while (n > 0) {
        sum += n % 10;  // শেষ অঙ্কটি বের করে sum এর সাথে যোগ করা
        n = n / 10;     // শেষ অঙ্কটি বাদ দিয়ে সংখ্যাটিকে ছোট করা
    }

    printf("অঙ্কগুলোর যোগফল: %d\n", sum);

    return 0;
}
