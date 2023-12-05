#ifndef GAME_OBJECT_H_
#define GAME_OBJECT_H_

namespace fbc {

template <class T>
class GameObject {
public:	
	virtual void update() = 0;
	virtual void draw(T& window) = 0;
	virtual ~GameObject() = default;
};

} // namespace fbc

#endif // GAME_OBJECT_H_