#include "main.h"

#ifndef FRUSTUM_H
#define FRUSTUM_H

class Frustum
{
public:
  Frustum() {}
  Frustum(float x, float y, float z, float h, float r1, float r2, color_t color);
  glm::vec3 position;
  float rotation;
  float r1, r2, h;
  void draw(glm::mat4 VP);
  void tick(float speed_x, float speed_y, float speed_z);

private:
  VAO *object;
};

#endif // FRUSTUM_H
