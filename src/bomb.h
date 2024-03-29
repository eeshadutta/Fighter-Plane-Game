#include "main.h"
#include "cuboid.h"
#include "frustum.h"

#ifndef BOMB_H
#define BOMB_H

class Bomb
{
public:
  Bomb() {}
  Bomb(float x, float y, float z);
  glm::vec3 position;
  float rotation;
  bool exist;
  float speed;
  void draw(glm::mat4 VP);
  void tick();
  Cuboid body;
  Frustum up, down, middle;

private:
  VAO *object;
};

#endif