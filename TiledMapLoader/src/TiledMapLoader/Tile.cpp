#include <TiledMapLoader/Tile.h>

static const unsigned FLIPPED_HORIZONTALLY_FLAG = 0x80000000;
static const unsigned FLIPPED_VERTICALLY_FLAG = 0x40000000;
static const unsigned FLIPPED_DIAGONALLY_FLAG = 0x20000000;

namespace TiledMapLoader {

	unsigned Tile::getGid() const {
		return mGid;
	}

	void Tile::setGid(unsigned gid) {
		mGid = gid  &~(FLIPPED_HORIZONTALLY_FLAG | FLIPPED_VERTICALLY_FLAG | FLIPPED_DIAGONALLY_FLAG);
		mFlippedHorizontally = (gid  &FLIPPED_HORIZONTALLY_FLAG) != 0;
		mFlippedVertically = (gid  &FLIPPED_VERTICALLY_FLAG) != 0;
		mFlippedDiagonally = (gid  &FLIPPED_DIAGONALLY_FLAG) != 0;
	}

	int Tile::getFlippedDiagonally() const {
		return mFlippedDiagonally;
	}

	void Tile::setFlippedDiagonally(int flippedDiagonally) {
		mFlippedDiagonally = flippedDiagonally;
	}

	int Tile::getFlippedHorizontally() const {
		return mFlippedHorizontally;
	}

	void Tile::setFlippedHorizontally(int flippedHorizontally) {
		mFlippedHorizontally = flippedHorizontally;
	}

	int Tile::getFlippedVertically() const {
		return mFlippedVertically;
	}

	void Tile::setFlippedVertically(int flippedVertically) {
		mFlippedVertically = flippedVertically;
	}

	int Tile::getHeight() const {
		return mHeight;
	}

	void Tile::setHeight(int height) {
		mHeight = height;
	}

	int Tile::getTilesetId() const {
		return mTilesetId;
	}

	void Tile::setTilesetId(int tilesetId) {
		mTilesetId = tilesetId;
	}

	int Tile::getTilesetX() const {
		return mTilesetX;
	}

	void Tile::setTilesetX(int tilesetX) {
		mTilesetX = tilesetX;
	}

	int Tile::getTilesetY() const {
		return mTilesetY;
	}

	void Tile::setTilesetY(int tilesetY) {
		mTilesetY = tilesetY;
	}

	int Tile::getWidth() const {
		return mWidth;
	}

	void Tile::setWidth(int width) {
		mWidth = width;
	}

	int Tile::getX() const {
		return mX;
	}

	void Tile::setX(int x) {
		mX = x;
	}

	int Tile::getY() const {
		return mY;
	}

	void Tile::setY(int y) {
		mY = y;
	}

}
