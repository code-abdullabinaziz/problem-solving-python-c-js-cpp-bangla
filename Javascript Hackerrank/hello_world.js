
/**
*   A line of code that prints "Hello, World!" on a new line is provided in the editor. 
*   Write a second line of code that prints the contents of 'parameterVariable' on a new line.
*
*	Parameter:
*   parameterVariable - A string of text.
**/
function greeting(parameterVariable) {
    // This line prints 'Hello, World!' to the console:
    console.log('Hello, World!');
    console.log(parameterVariable);
    // Write a line of code that prints parameterVariable to stdout using console.log:
    
}

" "-এর ভেতরে রাখলে: জাভাস্ক্রিপ্ট সেটিকে ভ্যারিয়েবল ভাবে না, হুবহু কোটেশনের ভেতরের টেক্সট প্রিন্ট করে দেয়।

কোটেশন ছাড়া লিখলে: জাভাস্ক্রিপ্ট ব্র্যাকেটের ভেতরের প্যারামিটার/ভ্যারিয়েবল চিনে নিয়ে সেটির মেমরি মান প্রিন্ট করে।



function applyDiscount(discount) {
  console.log("discount"); 
  console.log(discount);   
}

applyDiscount("10%");

Line 1 - 4:

ইভেন্ট: জাভাস্ক্রিপ্ট ইঞ্জিন applyDiscount নামে একটি ফাংশন ডিক্লারেশন মেমরিতে স্ক্যান এবং লোড করে।

অবস্থা: ফাংশনের ভেতরের কোনো কোড এখনো এক্সিকিউট বা রান হয়নি।

Line 6: applyDiscount("10%");

ইভেন্ট: ফাংশনটি কল (Invoke) করা হলো এবং আর্গুমেন্ট হিসেবে "10%" পাস করা হলো।

মেমরি স্ট্যাটাস: লোকাল স্কোপে প্যারামিটার discount-এর মান হিসেবে "10%" অ্যাসাইন হয়।

পরবর্তী ধাপ: কন্ট্রোল এখন ফাংশন ব্লকের ভেতরে (Line 2-এ) চলে যাবে।

Line 2: console.log("discount");

ইভেন্ট: console.log() এক্সিকিউট হয়।

লজিক: ব্র্যাকেটের ভেতর ডাবল কোটেশন " " থাকার কারণে জাভাস্ক্রিপ্ট এটিকে ভ্যারিয়েবল হিসেবে প্রসেস না করে সরাসরি একটি সাধারণ স্ট্রিং মান হিসেবে ধরে নেয়।

আউটপুট: discount

Line 3: console.log(discount);

ইভент: console.log() এক্সিকিউট হয়।

লজিক: এখানে কোনো কোটেশন নেই, তাই ইঞ্জিন এটিকে মেমরিতে থাকা ভ্যারিয়েবল/প্যারামিটার discount হিসেবে আইডিেন্টিফাই করে এবং মেমরি থেকে সেটির অ্যাসাইন করা মান তুলে আনে।

আউটপুট: 10%

Line 4: }

ইভেন্ট: ফাংশন এক্সিকিউশন শেষ। লোকাল স্কোপ খালি হয় এবং কন্ট্রোল ফাংশন থেকে বেরিয়ে আসে।

টার্মিনাল কনসোল আউটপুট:

discount
10%
