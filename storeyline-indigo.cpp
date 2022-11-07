/*
This is a beginning of a story about a boy named indigo. Feel free to play around!
*/

#include <iostream>
#include <string>

std::string intro_pg1 = "Vinny was a shy little boy. He was the eldeset of his brothers. His family all lived in a tiny apartment the size of a two car garage on the frostier parts of town. Often, he'd have troubles at school but his life was about to take him on a crazy adventure that he'd never imagine. In this story, you will have to help Vinny by making decisions for him. So what do you say, you up for it? \n";

std::string intro_pg2 = "When Vinny was 2.5 years old his speech was developing at a snale like pace and his mother decided to have a speech therapist help. This is how Vinny recived the nickname of Inidigo. His teacher would ask him to pick out the colors on cards that were shared, but Vinny would always say Inidigo. \n";

std::string intro_pg3 = "One day Vinny was coming from school, he kicked his shoes off, placed his bookbag down on the kitchen counter, and asked his mom, 'Where did Dad go?'. Mother answered, 'Off to work, he'll be back soon Vinny. Now, did you already do your homework at school? If not, I have a comfy chair, a pot of fresh cookies, and dinner is almost ready. But, I can spare 30 minutes! \n";

std::string did_homework = "Yes Mom, I finished my homework at school. Dad can't just disappear like that anymore. Jack is 5, he talks about him to me and Jimmy, how he's not around anymore... since..... Oh nevermind, just don't lie to Jack like you do to me please, okay? I'll be up in my room if you need me. Thanks mom.\n";

std::string didnt_homework = "No I didn't actually. I'm stoked, about the cookies. I thought I smelled something right before I was walking in the house. Wait, Dad stopped working like a month ago. Where is he really? Jack has been talking about him you know!? Ever since....\n";

std::string dinner_timer() {
  double counter = 0.05;
  std::string oven_countdown = "Oven-timer counting down.... ";
  while (counter > 0.00) {
    std::cout << oven_countdown << counter << "\n";
    counter -= 0.01;
  };
  return "Beeeep.... Beeeep....\n";
}

// User chooses to start the story
  bool verify_cond(std::string readon, std::string yes_or_no)
  {
  if (readon != "y" && readon != "n") {
    std::cout << yes_or_no;
    std::cin >> readon;
    if (readon == "y" || readon == "n") {
      return true;
    } else {
     std::cout << verify_cond(readon, yes_or_no);
    }
  }
  return true;
  };


int main() {
   // Variables used for conditional
  std::string yes = "y";
  std::string no = "n";
  std::string yes_or_no = "Type 'y/n: ";

  // Initialized upon executable start up.
  std::string readon;
  std::cout << intro_pg1;
  std::cout << yes_or_no;
  std::cin >> readon;
  bool verify_answer = verify_cond(readon, yes_or_no);

  // User selects the option to continue to story or exit
  if (verify_answer) {
    if (readon == yes) {
        std::cout << intro_pg2 << '\n' << intro_pg3;
        std::cout << yes_or_no;
        std::cin >> readon;
      if (verify_answer) {
        if (readon == no) {
        std::cout << didnt_homework;
        std::string dinner_bell = dinner_timer();
        std::cout << dinner_bell;
        }
        else if (readon == yes) {
        std::cout << did_homework;
        }
      }
    }
    else if (readon == no) {
      std::cout << "Sorry to see you go, maybe next time!";
      return 0;
    }
  }
return 0;
}