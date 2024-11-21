#include <stdio.h>
#include <string.h>

const char MOBILE_STR[] = "Mobile";
const char WINDOWS_STR[] = "Windows";
const char LINUX_STR[] = "Linux";
const char LINUX_MOBILE_STR[] = "Linux Mobile (Android)";
const char MACINTOSH_STR[] = "Macintosh";
const char UNKNON_STR[] = "Unknown";

char *sysin(const char *user_agent) {
  /* decisions are made here */
  const char *sys = NULL;
  if (strstr(user_agent, MOBILE_STR)) {
    if (strstr(user_agent, LINUX_STR)) {
      sys = LINUX_MOBILE_STR;
    } else {
      sys = UNKNON_STR;
    }
  } else {
    if (strstr(user_agent, WINDOWS_STR)) {
      sys = WINDOWS_STR;
    } else if (strstr(user_agent, LINUX_STR)) {
      sys = LINUX_STR;
    } else if (strstr(user_agent, MACINTOSH_STR)) {
      sys = MACINTOSH_STR;
    } else {
      sys = UNKNON_STR;
    }
  }
  return sys;
}

int main() {
  const int count = 5; /* items to examine */
  const char *indata[5] = {
      "Mozilla/5.0 (Macintosh; Intel Mac OS X 10_15_7) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/107.0.0.0 Safari/537.36",
      "Mozilla/5.0 (X11; Ubuntu; Linux x86_64; rv:103.0) Gecko/20100101 Firefox/103.0",
      "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/108.0.0.0 Safari/537.36",
      "Mozilla/5.0 (Linux; Android 13; SM-S901U) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/108.0.0.0 Mobile Safari/537.36",
      "Mozilla/5.0 (X11; CrOS x86_64 15117.111.0) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/107.0.0.0 Safari/537.36"};
  int x;   /* looping var */
  char *s; /* to store system name */

  /* examine the incoming connection strings */
  for (x = 0; x < count; x++) {
    s = sysin(indata[x]); /* read system string */
    /* report results */
    printf("%s system connected\n", s);
  }

  return (0);
}
