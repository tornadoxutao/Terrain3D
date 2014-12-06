//==================================================================================================================|
// Created 2014.12.05 by Daniel L. Watkins
//
// Copyright (C) 2014 Daniel L. Watkins
// This file is licensed under the MIT License.
//==================================================================================================================|

#ifndef _t3d_OPENGL_QUICK_VIEW_H
#define _t3d_OPENGL_QUICK_VIEW_H

#include <Main.h>
#include <QtQuick/QQuickView>

namespace t3d
{
	class OpenGLQuickView : public QQuickView
	{
	public:
		OpenGLQuickView();

	protected:
		void mousePressEvent(QMouseEvent *ev);
		void mouseReleaseEvent(QMouseEvent *ev);

		QVector2D consumeCursorDelta();
		void resetCursorPosition();

		void setCapturesCursor(bool capturesCursor) { mCapturesCursor = capturesCursor; }
		bool capturesCursor() { return mCapturesCursor; }
		bool mouseButtonLeftPressed() { return mMouseButtonLeftPressed; }

	private:
		bool mUpdatePending;
		bool mAnimating;
		bool mCapturesCursor;
		Vec2i mLastCursorPos;
		bool mMouseButtonLeftPressed;
	};
}

#endif
