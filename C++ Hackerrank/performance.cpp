#include <iostream>

using namespace std;

int main() {
    cout << "Hello, World!";
    return 0;
}




Objective
This is a simple challenge to help you practice printing to stdout. You may also want to complete Solve Me First in C++ before attempting this challenge.

We're starting out by printing the most famous computing phrase of all time! In the editor below, use either printf or cout to print the string  to stdout.

The more popular command form is cout. It has the following basic form:

cout<<value_to_print<<value_to_print;

Any number of values can be printed using one command as shown.

The printf command comes from C language. It accepts an optional format specification and a list of variables. Two examples for printing a string are:

printf("%s", string); printf(string);

Note that neither method adds a newline. It only prints what you tell it to.

Output Format

Print  to stdout.

Sample Output

Hello, World!



#include <iostream>

int main() {
    std::cout << "Hello, World!\n";
    return 0;
}



#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // ফাস্ট ইনপুট-আউটপুট করার ম্যাজিক লাইন (DSA-এর জন্য অত্যন্ত জরুরি)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // আপনার কোড বা লজিক এখানে হবে
    cout << "Hello, World!\n";

    return 0;
}


১. #include <vector> কেন ব্যবহার করা হয়?

কাজ: এটি সি++ স্ট্যান্ডার্ড লাইব্রেরির ডাইনামিক অ্যারে (Dynamic Array) বা ভেক্টরের হেডার ফাইল।

কেন প্রয়োজন: সাধারণ অ্যারের সাইজ আগে থেকেই ফিক্স করে দিতে হয় (int arr[100]), কিন্তু ডিএসএ-তে ইনপুটের 
    
সাইজ কত হবে তা অনেক সময় রানটাইমে জানা থাকে না। vector ব্যবহার করলে প্রয়োজন অনুযায়ী এর সাইজ নিজে থেকেই ছোট-বড় হতে পারে।
    
ডিএসএ প্রবলেমের ৯০% জায়গায় ডেটা স্টোর করার জন্য ভেক্টর ব্যবহার করা হয়। তাই এটি টেমপ্লেটে আগে থেকেই যুক্ত রাখা হয়।

    
২. #include <algorithm> কেন ব্যবহার করা হয়?
    
কাজ: এটি সি++ এর বিল্ট-ইন অ্যালগরিদম বা ফাংশন লাইব্রেরি।

কেন প্রয়োজন: ডিএসএ করার সময় আমাদের ঘনঘন বিভিন্ন ডেটা সর্ট করতে হয় (sort()), 
    
বাইনারি সার্চ করতে হয় (binary_search()), কিংবা সবচেয়ে বড় বা ছোট সংখ্যা খুঁজতে হয় (max(), min())। 
    
এই পাওয়ারফুল ফাংশনগুলো কোড করার সময় যেন বারবার নিজে লিখতে না হয়, সেজন্য এই হেডার ফাইলটি যুক্ত করা থাকে যাতে সরাসরি ফাংশনগুলো ব্যবহার করা যায়।


    
৩. ios_base::sync_with_stdio(false); কেন দেওয়া হয়?

মূল কাজ: সি++ এর ইনপুট-আউটপুট সিস্টেম (cin/cout)-কে সি ল্যাঙ্গুয়েজের ইনপুট-আউটপুট
    
সিস্টেম (scanf/printf)-এর সাথে সিনক্রোনাইজেশন বা মেলবন্ধন থেকে আলাদা (Discouple) করে দেয়।

কেন জরুরি: বাই ডিফল্ট, সি++ চায় যাতে কেউ একই কোডে scanf এবং cin একসাথে ব্যবহার করলেও যেন কোনো সমস্যা না হয়। 
    
এই মেলবন্ধন টিকিয়ে রাখতে ব্যাকগ্রাউন্ডে অতিরিক্ত মেমরি ও প্রসেসিং খরচ হয়, যা কোডকে কিছুটা ধীরগতির করে তোলে।
    
false করে দেওয়ার মাধ্যমে কম্পাইলারকে বলে দেওয়া হয় যে—"আমার কোডে সি-এর কোনো ইনপুট লাগবে না, 
    
শুধু সি++ এর cin/cout চলবে।" ফলে ইনপুট নেওয়ার গতি বহুগুণ বেড়ে যায়।


    
৪. cin.tie(NULL); কেন দেওয়া হয়?

মূল কাজ: cin এবং cout-এর মধ্যকার টাই বা সংযোগ বিচ্ছিন্ন করে দেয়।

কেন জরুরি: বাই ডিফল্ট, আপনি যখনই কিবোর্ড থেকে কিছু ইনপুট নিতে যান (cin), 
    
তার ঠিক আগে কম্পিউটার স্বয়ংক্রিয়ভাবে স্ক্রিনের সমস্ত আউটপুট cout প্রিন্ট করে ফ্লাশ (Flush) করে দেয়, 
    
যাতে ইউজার আগে কোনো টেক্সট দেখতে পায়। একে বলে flushing। কিন্তু কম্পিটিটিভ প্রোগ্রামিংয়ে স্ক্রিনে সুন্দর মেসেজ প্রিন্ট করার সময় থাকে না;

এখানে শুধু দ্রুত ইনপুট নিয়ে কাজ করতে হয়। cin.tie(NULL) লিখে এই অটো-ফ্লাশ বন্ধ করে দেওয়া হয়, যা কোডকে আরও বেশি ফাস্ট করে তোলে।

সারসংক্ষেপ:
    
এই দুটি লাইন (ios_base এবং cin.tie) মূলত আপনার কোডের স্পিড বাড়িয়ে দেয়, 
যাতে হ্যাকারর‍্যাংক বা কোডফোর্সেসের বড় বড় টেস্ট কেস রান করার সময় কোড "Time Limit Exceeded (TLE)" এ খেয়ে থেমে না যায়!
