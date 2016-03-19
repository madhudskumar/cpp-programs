using namespace std;

void l1(char *a);
void l2(char *a);
void l3(char *a);
void l4(char *a);
void l5(char *a);


void output(char *a, int line){
	
	char push = *a;
	switch (line)
	{
	case 1:l1(&push); break;
	case 2:l2(&push); break;
	case 3:l3(&push); break;
	case 4:l4(&push); break;
	case 5:l5(&push); break;
	}
}

void l1(char *a){
	switch (*a)
	{
	case 'a':cout << "  ...  "; break;
	case 'b':cout << " ....  "; break;
	case 'c':cout << " ..... "; break;
	case 'd':cout << " ....  "; break;
	case 'e':cout << " ..... "; break;
	case 'f':cout << " ..... "; break;
	case 'g':cout << " ....  "; break;
	case 'h':cout << " .   . "; break;
	case 'i':cout << "  ...  "; break;
	case 'j':cout << "  ...  "; break;
	case 'k':cout << " .   . "; break;
	case 'l':cout << " .     "; break;
	case 'm':cout << " .. .. "; break;
	case 'n':cout << " ..  . "; break;
	case 'o':cout << "  ...  "; break;
	case 'p':cout << " ....  "; break;
	case 'q':cout << "  ...  "; break;
	case 'r':cout << " ....  "; break;
	case 's':cout << "  .... "; break;
	case 't':cout << "  ...  "; break;
	case 'u':cout << " .   . "; break;
	case 'v':cout << " .   . "; break;
	case 'w':cout << " . . . "; break;
	case 'x':cout << " .   . "; break;
	case 'y':cout << " .. .. "; break;
	case 'z':cout << " ..... "; break;
	default:cout << "       "; break;

	}
}

void l2(char *a){
	switch (*a)
	{
	case 'a':cout << " .   . "; break;
	case 'b':cout << " .   . "; break;
	case 'c':cout << " .     "; break;
	case 'd':cout << " .   . "; break;
	case 'e':cout << " .     "; break;
	case 'f':cout << " .     "; break;
	case 'g':cout << " .     "; break;
	case 'h':cout << " .   . "; break;
	case 'i':cout << " . . . "; break;
	case 'j':cout << " . . . "; break;
	case 'k':cout << " .  .  "; break;
	case 'l':cout << " .     "; break;
	case 'm':cout << " .. .. "; break;
	case 'n':cout << " . . . "; break;
	case 'o':cout << " .   . "; break;
	case 'p':cout << " .   . "; break;
	case 'q':cout << " .   . "; break;
	case 'r':cout << " .   . "; break;
	case 's':cout << " .     "; break;
	case 't':cout << " . . . "; break;
	case 'u':cout << " .   . "; break;
	case 'v':cout << " .   . "; break;
	case 'w':cout << " . . . "; break;
	case 'x':cout << "  . .  "; break;
	case 'y':cout << " .   . "; break;
	case 'z':cout << "    .  "; break;
	default:cout << "       "; break;
	}
}

void l3(char *a){
	switch (*a)
	{
	case 'a':cout << " .   . "; break;
	case 'b':cout << " ..... "; break;
	case 'c':cout << " .     "; break;
	case 'd':cout << " .   . "; break;
	case 'e':cout << " ..... "; break;
	case 'f':cout << " ..... "; break;
	case 'g':cout << " .  .. "; break;
	case 'h':cout << " ..... "; break;
	case 'i':cout << "   .   "; break;
	case 'j':cout << "   .   "; break;
	case 'k':cout << " . .   "; break;
	case 'l':cout << " .     "; break;
	case 'm':cout << " . . . "; break;
	case 'n':cout << " . . . "; break;
	case 'o':cout << " .   . "; break;
	case 'p':cout << " ....  "; break;
	case 'q':cout << " .  .. "; break;
	case 'r':cout << " ....  "; break;
	case 's':cout << "  ...  "; break;
	case 't':cout << "   .   "; break;
	case 'u':cout << " .   . "; break;
	case 'v':cout << " .   . "; break;
	case 'w':cout << " . . . "; break;
	case 'x':cout << "   .   "; break;
	case 'y':cout << "  . .  "; break;
	case 'z':cout << "   .   "; break;
	default:cout << "       "; break;
	}
}

void l4(char *a){
	switch (*a)
	{
	case 'a':cout << " ..... "; break;
	case 'b':cout << " .   . "; break;
	case 'c':cout << " .     "; break;
	case 'd':cout << " .   . "; break;
	case 'e':cout << " .     "; break;
	case 'f':cout << " .     "; break;
	case 'g':cout << " ..... "; break;
	case 'h':cout << " .   . "; break;
	case 'i':cout << " . . . "; break;
	case 'j':cout << " . .   "; break;
	case 'k':cout << " .  .  "; break;
	case 'l':cout << " .     "; break;
	case 'm':cout << " .   . "; break;
	case 'n':cout << " . . . "; break;
	case 'o':cout << " .   . "; break;
	case 'p':cout << " .     "; break;
	case 'q':cout << "  .... "; break;
	case 'r':cout << " .  .  "; break;
	case 's':cout << "     . "; break;
	case 't':cout << "   .   "; break;
	case 'u':cout << " .   . "; break;
	case 'v':cout << "  . .  "; break;
	case 'w':cout << " . . . "; break;
	case 'x':cout << "  . .  "; break;
	case 'y':cout << "   .   "; break;
	case 'z':cout << "  .    "; break;
	default:cout << "       "; break;
	}
}

void l5(char *a){
	switch (*a)
	{
	case 'a':cout << " .   . "; break;
	case 'b':cout << " ....  "; break;
	case 'c':cout << " ..... "; break;
	case 'd':cout << " ....  "; break;
	case 'e':cout << " ..... "; break;
	case 'f':cout << " .     "; break;
	case 'g':cout << "     . "; break;
	case 'h':cout << " .   . "; break;
	case 'i':cout << "  ...  "; break;
	case 'j':cout << "  ..   "; break;
	case 'k':cout << " .   . "; break;
	case 'l':cout << " ..... "; break;
	case 'm':cout << " .   . "; break;
	case 'n':cout << " .  .. "; break;
	case 'o':cout << "  ...  "; break;
	case 'p':cout << " .     "; break;
	case 'q':cout << "     . "; break;
	case 'r':cout << " .   . "; break;
	case 's':cout << " ....  "; break;
	case 't':cout << "   .   "; break;
	case 'u':cout << "  ...  "; break;
	case 'v':cout << "   .   "; break;
	case 'w':cout << "  . .  "; break;
	case 'x':cout << " .   . "; break;
	case 'y':cout << "   .   "; break;
	case 'z':cout << " ..... "; break;
	default:cout << "       "; break;
	}
}
