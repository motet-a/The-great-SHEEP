#include "top_header.hpp"
#include "camera.hpp"

Camera::Camera()
{
  lookat[0] = TILE_WIDTH / 2;
  lookat[1] = TILE_HEIGHT / 2;
}

Camera::~Camera()
{
}

const Vect<2, double>& Camera::getCamera()
{
  return (lookat);
}

void Camera::setCamera(double x, double y)
{
  lookat[0] = x;
  lookat[1] = y;
}

void Camera::moveCamera(double x, double y)
{
  lookat[0] += x;
  lookat[1] += y;
}
