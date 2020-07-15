#include "esp_lua.h"

void setup()
{
  Serial.begin(115200);
  lua_State *L = luaL_newstate();
  luaL_openlibs(L);
  lua_register(L, "print", L_print);
  luaL_dostring(L, "print('Hello World!!')");
  lua_close(L);
}

void loop()
{

}
