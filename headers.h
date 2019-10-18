struct nameAge {char n[100]; int a;};
int printStruct(struct nameAge param);
int modifyStruct(struct nameAge *param, char *name, int age);
struct nameAge example(int i);
int randAge(int i);
int randName(int i, struct nameAge *param);
