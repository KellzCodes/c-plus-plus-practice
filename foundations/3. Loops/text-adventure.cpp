#include <iostream>

int main() {

    std::cout << "It's been a strange day indeed. You've fallen down a rabbit hole, happened across a strange tea party, and had many other absurd adventures.\n";
    std::cout << "But now, you are called to a trial of some sort, ushered in by a Gryphon.\n";
    std::cout << "The King and Queen of Hearts are seated on their throne when you arrive, with a great crowd assembled about them — all sorts of little birds and beasts, as well as the whole pack of cards.\n";
    std::cout << "The White Rabbit is standing near the King, with a trumpet in one hand, and a scroll of parchment in the other.\n";
    std::cout << "\n";
    std::cout << "     \\\\\n";
    std::cout << "      \\\\_\n";
    std::cout << "      ( _\\Dn==(\n";
    std::cout << "      / \\__|\n";
    std::cout << "     / _/`\"`\n";
    std::cout << "    {\\  )_\n";
    std::cout << "     `\"\"\"`\n";

    std::cout << "\n";
    std::cout << "In the very middle of the court is a table, with a large dish of tarts upon it. They look really good, making you feel quite hungry.\n";
    std::cout << "You see twelve jurors writing busily on slates. You wonder how they have anything to write down before the trial's begun.\n";
    std::cout << "*      *      *\n";
    std::cout << "What do you do?\n";

    char choice1;
    
    for (int i = 0; i < 3 && choice1 != 'A' && choice1 != 'B' && choice1 != 'C'; i++) {

        std::cout << "Enter A if you ask the Gryphon next to you what the jurors are doing.\n";
        std::cout << "Enter B if you sneak a tart.\n";
        std::cout << "Enter C if you sit and wait for the trial to begin.\n";
        std::cin >> choice1;

    }

    switch (choice1) {

        case 'A':
            std::cout << "The Gryphon explains that the jurors are writing down their names for fear they should forget before the end of the trial.\n";
            std::cout << "'How stupid!' you say in a loud voice, but you are cut off.\n";
            std::cout << "'SILENCE IN THE COURT!' shrieks the White Rabbit. The king puts on his glasses and looks around anxiously to see who was talking.\n";
            std::cout << "You manage to keep your mouth shut and the King fails to notice you.\n";
            break;

        case 'B':
            std::cout << "Just as you get your hand on a scrumptious-looking tart, you hear a bellowing voice that fills you with dread.\n";
            std::cout << "'YOU did it!' screams the Queen of Hearts.\n";
            std::cout << "'I did what?' you ask.\n";
            std::cout << "'SHE stole the tarts! Thief! OFF WITH HER HEAD!' the Queen is pointing at you. Her face is growing redder as her voice gets higher.\n";
            std::cout << "Several cards dressed as guards carry you off to be executed.\n";
            std::cout << "Just as your head is on the chopping block, you catch a glimpse of a wide smile in the tree above.\n";
            std::cout << "THE END\n";
            return 0;

        case 'C':
            std::cout << "The court begins to settle down.\n";
            break;

        default:
            std::cout << "Sorry, you haven't entered a valid choice.\n";
            std::cout << "Goodbye.\n";
            return 0;

    }

    std::cout << "'Herald, read the accusation!' yells the King.\n";
    std::cout << "On this the White Rabbit blows three blasts on the trumpet, and then unrolls the parchment scroll, and reads as follows:\n";
    std::cout << "\n";
    std::cout << "'The Queen of Hearts, she made some tarts,\n";
    std::cout << "    All on a summer day:\n";
    std::cout << "The Knave of Hearts, he stole those tarts,\n";
    std::cout << "    And took them quite away!'\n";
    std::cout << "\n";
    std::cout << "'Consider your verdict,' says the King to the jury.\n";
    std::cout << "'Not yet, not yet,' the Rabbit hastily interrupts him.\n";
    std::cout << "\n";

    std::cout << "*      *      *\n";
    std::cout << "As the first witness is called, you notice a bit of cake in your pocket. You are still very hungry.\n";
    std::cout << "Do you eat the bit of cake in your pocket?\n";
    char choice2;
    
    for (int i = 0; i < 3 && choice2 != 'A' && choice2 != 'B'; i++) {

        std::cout << "Enter A if you eat the cake.\n";
        std::cout << "Enter B if you decide to wait until the trial is over.\n";
        std::cin >> choice2;

    }

    if (choice2 != 'A' && choice2 != 'B') {

        std::cout << "Sorry, you haven't entered a valid choice.\n";
        std::cout << "Goodbye.\n";
        return 0;

    } else if (choice2 == 'B') {

        std::cout << "Your stomach rumbles audibly, interrupting the interrogation.\n";
        std::cout << "'YOU did it!' screams the Queen of Hearts.\n";
        std::cout << "'I did what?' you ask.\n";
        std::cout << "'SHE stole the tarts! Thief! OFF WITH HER HEAD!' the Queen is pointing at you. Her face is growing redder as her voice gets higher.\n";
        std::cout << "Several cards dressed as guards carry you off to be executed.\n";
        std::cout << "Just as your head is on the chopping block, you catch a glimpse of a wide smile in the tree above.\n";
        std::cout << "THE END\n";
        return 0;

    }

    std::cout << "You eat the cake and it really does make you feel better. Meanwhile, the trial proceeds...\n";
    std::cout << "The first witness is the Hatter.\n";
    std::cout << "'Give your evidence,' says the King, 'and don't be nervous, or you'll be executed on the spot.'\n";
    std::cout << "\n";

    std::cout << "*      *      *\n";
    std::cout << "While the Hatter answers nervously, you suddenly feel a very curious sensation — you are growing larger.\n";
    std::cout << "It must have been the cake you ate...\n";
    std::cout << "What do you do?\n";
    char choice3;
    
    for (int i = 0; i < 3 && choice3 != 'A' && choice3 != 'B'; i++) {

        std::cout << "Enter A if you get up and leave the court.\n";
        std::cout << "Enter B if you decide to remain where you are as long as there is room for you.\n";
        std::cin >> choice3;

    }

    if (choice3 != 'A' && choice3 != 'B') {

        std::cout << "Sorry, you haven't entered a valid choice.\n";
        std::cout << "Goodbye.\n";
        return 0;

    } else if (choice3 == 'A') {

        std::cout << "You leave the court room in search of a way home.\n";
        std::cout << "However, everyone who could help you is still in the court room, so you wander the forest for years.\n";
        std::cout << "THE END\n";
        return 0;

    }

    std::cout << "You stay, much to the annoyance of the Dormouse who is getting squeezed sitting next to you.\n";
    std::cout << "'Never mind!' says the King to the Hatter, 'call the next witness.'\n";
    std::cout << "'— and just take his head off outside' says the Queen to one of the officers.'\n";
    std::cout << "You watch the White Rabbit fumble over the list. He reads at the the top of his shrill voice:\n";
    std::cout << "ALICE!\n";
    std::cout << "\n";
    std::cout << "*      *      *\n";
    std::cout << "In your surprise, what do you do?\n";

    char choice4;
    
    for (int i = 0; i < 3 && choice4 != 'A' && choice4 != 'B' && choice4 != 'C'; i++) {

        std::cout << "Enter A if you rise up and declare yourself present.\n";
        std::cout << "Enter B if you stay seated and shout 'Here!'.\n";
        std::cout << "Enter C if you do nothing.\n";
        std::cin >> choice4;

    }

    if (choice4 != 'A' && choice4 != 'B' && choice4 != 'C') {

        std::cout << "Sorry, you haven't entered a valid choice.\n";
        std::cout << "Goodbye.\n";
        return 0;

    } else if (choice4 == 'A') {

        std::cout << "'Here!' You jump up in such a hurry that you knock over the jury box with the edge of your skirt.\n";
        std::cout << "The jury is scattered across the floor.\n";
        std::cout << "'The trial cannot proceed,' says the King accusingly, 'until all the jurymen are back in their proper places.'\n";
        std::cout << "You hastily put as many jury members back in place as you can";

    } else if (choice4 == 'C') {

        std::cout << "All eyes turn to you, except for the King and Queen.\n";
        std::cout << "'That's Alice,' the Gryphon points you out helpfully, even as you glare at him.\n";

    }

    std::cout << "'What do you know about this business?' the King asks you.\n";
    std::cout << "'Nothing,' you reply, honestly.\n";
    std::cout << "The King reads from his book, 'Rule forty-two. All persons more than a mile high to leave the court.'\n";

    std::cout << "*      *      *\n";
    std::cout << "How do you respond?\n";

    char choice5;

    for (int i = 0; i < 3 && choice5 != 'A' && choice5 != 'B' && choice5 != 'C'; i++) {

        std::cout << "Enter A if you agree to leave the court.\n";
        std::cout << "Enter B if you argue about your height with the King.\n";
        std::cout << "Enter C if you flip over the jury box again and steal a tart.\n";
        std::cin >> choice5;

    }

    switch (choice5) {

        case 'A':
            std::cout << "You leave the court room in search of a way home.\n";
            std::cout << "However, everyone who could help you is still in the court room, so you wander the forest for years.\n";
            std::cout << "THE END\n";
            return 0;

        case 'B':
            std::cout << "'I'm not a mile high,' you say.\n";
            std::cout << "'Nearly TWO miles high,' says the Queen of Hearts.\n";
            std::cout << "'Well, I shan't go at any rate,' you reply.\n";
            std::cout << "'Hold your tongue!' says the Queen turning purple.\n";
            std::cout << "'I won't!' you retort.\n";
            std::cout << "'Off with her head!' the Queen shouts at the top of her voice.\n";
            std::cout << "'Who cares?' you ask, realizing how small everyone has become. 'You're nothing but a pack of cards!'\n";
            break;

        case 'C':
            std::cout << "'Stuff and nonsense!' you yell, as you flip over the jury box - this time on purpose.\n";
            std::cout << "'Hold your tongue!' says the Queen turning purple.\n";
            std::cout << "'I'll do no such thing!' you retort.\n";
            std::cout << "You scoop up the remaining tarts, which now appear to be very small, and shove them all in your mouth.\n";
            std::cout << "You hear the Queen cry, 'Off with her head!' as you begin to storm out of the court.\n";
            break;

        default:
            std::cout << "Sorry, you haven't entered a valid choice.\n";
            std::cout << "Goodbye.\n";
            return 0;
    }

    std::cout << "At this, the whole pack rises up into the air and flies down on you.\n";
    std::cout << "You try to beat them off, and awake to find yourself lying on the bank of the river with your head in your sister's lap.\n";
    std::cout << "'Wake up, Alice dear!' your sister says. 'Why, what a long sleep you've had!'\n";
    std::cout << "'Oh I've had such a curious dream' you reply. And you tell her, as well as you can remember, all the strange adventures you've just had.\n";

}