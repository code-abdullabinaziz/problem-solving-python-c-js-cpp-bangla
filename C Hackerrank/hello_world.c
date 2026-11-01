যে কোডটি, সেটিই হলো সবচেয়ে স্ট্যান্ডার্ড এবং বহুল প্রচলিত পদ্ধতি।

#include <stdio.h>
int main() 
{
	printf("Hello, World!\n");
    printf("Welcome to C programming.\n");
    return 0;
}



১. একটিমাত্র printf ব্যবহার করে (Single printf Approach)

আলাদা দুটি লাইনে লেখার বদলে একটিমাত্র printf-এর ভেতরেই এস্কেপ সিকোয়েন্স \n ব্যবহার করে কাজটি করা যায়:

#include <stdio.h>

int main() {
    printf("Hello, World!\nWelcome to C programming.\n");
    return 0;
}



২. printf-এর বদলে puts() ফাংশন ব্যবহার করে 
	
সাধারণ টেক্সট বা স্ট্রিং প্রিন্ট করার জন্য সি ভাষায় printf-এর পাশাপাশি puts() ফাংশন ব্যবহার করা যায়।
puts()-এর একটি বিশেষ সুবিধা হলো এটি প্রিন্ট করার পর নিজে থেকেই স্বয়ংক্রিয়ভাবে একটি নতুন লাইন (\n) যোগ করে দেয়।

#include <stdio.h>

int main() {
    puts("Hello, World!");
    puts("Welcome to C programming.");
    return 0;
}



৩. স্ট্রিং ভ্যারিয়েবল বা অ্যারে ব্যবহার করে
টেক্সটগুলোকে সরাসরি প্রিন্ট না করে প্রথমে মেমরিতে অ্যারে বা ভ্যারিয়েবলে স্টোর করে, এরপর %s ফরম্যাট স্পেসিফায়ার দিয়ে প্রিন্ট করা যায়:

#include <stdio.h>

int main() {
    char msg1[] = "Hello, World!";
    char msg2[] = "Welcome to C programming.";
    
    printf("%s\n", msg1);
    printf("%s\n", msg2);
    
    return 0;
}


৪. কমপ্যাক্ট বা এক লাইনে লেখা (Stylistic Formatting)
সি ল্যাঙ্গুয়েজে হোয়াইটস্পেস বা অতিরিক্ত স্পেস-এন্টার কম্পাইলার ইগনোর করে। তাই চাইলে কোডটি দেখতে ছোট করার জন্য 
এক লাইনেও লিখে ফেলা যায়(যদিও এটি বড় প্রজেক্টে প্রফেশনাল স্ট্যান্ডার্ড নয়):

#include <stdio.h>
int main() { printf("Hello, World!\nWelcome to C programming.\n"); return 0; }
