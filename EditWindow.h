/*
 * Copyright 2015-2016. All rights reserved.
 * Distributed under the terms of the MIT license.
 *
 * Author:
 *	Humdinger, humdingerb@gmail.com
 */

#ifndef EDIT_WINDOW_H
#define EDIT_WINDOW_H

#include <TextControl.h>
#include <Window.h>

#include "FavItem.h"


class EditWindow : public BWindow {
public:
					EditWindow(BRect frame, BString text);
	virtual			~EditWindow();

	void			MessageReceived(BMessage* message);

private:
	void			_BuildLayout();

	BString			fOriginalTitle;
	BTextControl*	fTitleControl;
};

#endif // EDIT_WINDOW_H
