// ** THIS FILE IS GENERATED **
// ** use generateConvert.php to update this file **



#include "../ActionType.enum.h"

#include <string>
using std::string;
#include <glib.h>


// ** This needs to be copied to the header
ActionType ActionType_fromString(string value);
string ActionType_toString(ActionType value);


ActionType ActionType_fromString(string value)
{
	if (value == "ACTION_NONE")
	{
		return ACTION_NONE;
	}

	if (value == "ACTION_NEW")
	{
		return ACTION_NEW;
	}

	if (value == "ACTION_OPEN")
	{
		return ACTION_OPEN;
	}

	if (value == "ACTION_ANNOTATE_PDF")
	{
		return ACTION_ANNOTATE_PDF;
	}

	if (value == "ACTION_SAVE")
	{
		return ACTION_SAVE;
	}

	if (value == "ACTION_SAVE_AS")
	{
		return ACTION_SAVE_AS;
	}

	if (value == "ACTION_EXPORT_AS_PDF")
	{
		return ACTION_EXPORT_AS_PDF;
	}

	if (value == "ACTION_EXPORT_AS")
	{
		return ACTION_EXPORT_AS;
	}

	if (value == "ACTION_PRINT")
	{
		return ACTION_PRINT;
	}

	if (value == "ACTION_QUIT")
	{
		return ACTION_QUIT;
	}

	if (value == "ACTION_UNDO")
	{
		return ACTION_UNDO;
	}

	if (value == "ACTION_REDO")
	{
		return ACTION_REDO;
	}

	if (value == "ACTION_CUT")
	{
		return ACTION_CUT;
	}

	if (value == "ACTION_COPY")
	{
		return ACTION_COPY;
	}

	if (value == "ACTION_PASTE")
	{
		return ACTION_PASTE;
	}

	if (value == "ACTION_SEARCH")
	{
		return ACTION_SEARCH;
	}

	if (value == "ACTION_DELETE")
	{
		return ACTION_DELETE;
	}

	if (value == "ACTION_SETTINGS")
	{
		return ACTION_SETTINGS;
	}

	if (value == "ACTION_GOTO_FIRST")
	{
		return ACTION_GOTO_FIRST;
	}

	if (value == "ACTION_GOTO_BACK")
	{
		return ACTION_GOTO_BACK;
	}

	if (value == "ACTION_GOTO_PAGE")
	{
		return ACTION_GOTO_PAGE;
	}

	if (value == "ACTION_GOTO_NEXT")
	{
		return ACTION_GOTO_NEXT;
	}

	if (value == "ACTION_GOTO_LAST")
	{
		return ACTION_GOTO_LAST;
	}

	if (value == "ACTION_GOTO_NEXT_LAYER")
	{
		return ACTION_GOTO_NEXT_LAYER;
	}

	if (value == "ACTION_GOTO_PREVIOUS_LAYER")
	{
		return ACTION_GOTO_PREVIOUS_LAYER;
	}

	if (value == "ACTION_GOTO_TOP_LAYER")
	{
		return ACTION_GOTO_TOP_LAYER;
	}

	if (value == "ACTION_GOTO_NEXT_ANNOTATED_PAGE")
	{
		return ACTION_GOTO_NEXT_ANNOTATED_PAGE;
	}

	if (value == "ACTION_GOTO_PREVIOUS_ANNOTATED_PAGE")
	{
		return ACTION_GOTO_PREVIOUS_ANNOTATED_PAGE;
	}

	if (value == "ACTION_NEW_PAGE_BEFORE")
	{
		return ACTION_NEW_PAGE_BEFORE;
	}

	if (value == "ACTION_NEW_PAGE_AFTER")
	{
		return ACTION_NEW_PAGE_AFTER;
	}

	if (value == "ACTION_NEW_PAGE_AT_END")
	{
		return ACTION_NEW_PAGE_AT_END;
	}

	if (value == "ACTION_CONFIGURE_PAGE_TEMPLATE")
	{
		return ACTION_CONFIGURE_PAGE_TEMPLATE;
	}

	if (value == "ACTION_DELETE_PAGE")
	{
		return ACTION_DELETE_PAGE;
	}

	if (value == "ACTION_NEW_LAYER")
	{
		return ACTION_NEW_LAYER;
	}

	if (value == "ACTION_DELETE_LAYER")
	{
		return ACTION_DELETE_LAYER;
	}

	if (value == "ACTION_PAPER_FORMAT")
	{
		return ACTION_PAPER_FORMAT;
	}

	if (value == "ACTION_PAPER_BACKGROUND_COLOR")
	{
		return ACTION_PAPER_BACKGROUND_COLOR;
	}

	if (value == "ACTION_TOOL_PEN")
	{
		return ACTION_TOOL_PEN;
	}

	if (value == "ACTION_TOOL_ERASER")
	{
		return ACTION_TOOL_ERASER;
	}

	if (value == "ACTION_TOOL_HILIGHTER")
	{
		return ACTION_TOOL_HILIGHTER;
	}

	if (value == "ACTION_TOOL_TEXT")
	{
		return ACTION_TOOL_TEXT;
	}

	if (value == "ACTION_TOOL_IMAGE")
	{
		return ACTION_TOOL_IMAGE;
	}

	if (value == "ACTION_TOOL_SELECT_RECT")
	{
		return ACTION_TOOL_SELECT_RECT;
	}

	if (value == "ACTION_TOOL_SELECT_REGION")
	{
		return ACTION_TOOL_SELECT_REGION;
	}

	if (value == "ACTION_TOOL_SELECT_OBJECT")
	{
		return ACTION_TOOL_SELECT_OBJECT;
	}

	if (value == "ACTION_TOOL_PLAY_OBJECT")
	{
		return ACTION_TOOL_PLAY_OBJECT;
	}

	if (value == "ACTION_TOOL_VERTICAL_SPACE")
	{
		return ACTION_TOOL_VERTICAL_SPACE;
	}

	if (value == "ACTION_TOOL_HAND")
	{
		return ACTION_TOOL_HAND;
	}

	if (value == "ACTION_TOOL_DEFAULT")
	{
		return ACTION_TOOL_DEFAULT;
	}

	if (value == "ACTION_SHAPE_RECOGNIZER")
	{
		return ACTION_SHAPE_RECOGNIZER;
	}

	if (value == "ACTION_TOOL_DRAW_RECT")
	{
		return ACTION_TOOL_DRAW_RECT;
	}

	if (value == "ACTION_TOOL_DRAW_CIRCLE")
	{
		return ACTION_TOOL_DRAW_CIRCLE;
	}

	if (value == "ACTION_TOOL_DRAW_ARROW")
	{
		return ACTION_TOOL_DRAW_ARROW;
	}

	if (value == "ACTION_TOOL_DRAW_COORDINATE_SYSTEM")
	{
		return ACTION_TOOL_DRAW_COORDINATE_SYSTEM;
	}

	if (value == "ACTION_RULER")
	{
		return ACTION_RULER;
	}

	if (value == "ACTION_TOOL_LINE_STYLE_PLAIN")
	{
		return ACTION_TOOL_LINE_STYLE_PLAIN;
	}

	if (value == "ACTION_TOOL_LINE_STYLE_DASH")
	{
		return ACTION_TOOL_LINE_STYLE_DASH;
	}

	if (value == "ACTION_TOOL_LINE_STYLE_DASH_DOT")
	{
		return ACTION_TOOL_LINE_STYLE_DASH_DOT;
	}

	if (value == "ACTION_TOOL_LINE_STYLE_DOT")
	{
		return ACTION_TOOL_LINE_STYLE_DOT;
	}

	if (value == "ACTION_SIZE_VERY_THIN")
	{
		return ACTION_SIZE_VERY_THIN;
	}

	if (value == "ACTION_SIZE_FINE")
	{
		return ACTION_SIZE_FINE;
	}

	if (value == "ACTION_SIZE_MEDIUM")
	{
		return ACTION_SIZE_MEDIUM;
	}

	if (value == "ACTION_SIZE_THICK")
	{
		return ACTION_SIZE_THICK;
	}

	if (value == "ACTION_SIZE_VERY_THICK")
	{
		return ACTION_SIZE_VERY_THICK;
	}

	if (value == "ACTION_TOOL_ERASER_STANDARD")
	{
		return ACTION_TOOL_ERASER_STANDARD;
	}

	if (value == "ACTION_TOOL_ERASER_WHITEOUT")
	{
		return ACTION_TOOL_ERASER_WHITEOUT;
	}

	if (value == "ACTION_TOOL_ERASER_DELETE_STROKE")
	{
		return ACTION_TOOL_ERASER_DELETE_STROKE;
	}

	if (value == "ACTION_TOOL_ERASER_SIZE_FINE")
	{
		return ACTION_TOOL_ERASER_SIZE_FINE;
	}

	if (value == "ACTION_TOOL_ERASER_SIZE_MEDIUM")
	{
		return ACTION_TOOL_ERASER_SIZE_MEDIUM;
	}

	if (value == "ACTION_TOOL_ERASER_SIZE_THICK")
	{
		return ACTION_TOOL_ERASER_SIZE_THICK;
	}

	if (value == "ACTION_TOOL_PEN_SIZE_VERY_THIN")
	{
		return ACTION_TOOL_PEN_SIZE_VERY_THIN;
	}

	if (value == "ACTION_TOOL_PEN_SIZE_FINE")
	{
		return ACTION_TOOL_PEN_SIZE_FINE;
	}

	if (value == "ACTION_TOOL_PEN_SIZE_MEDIUM")
	{
		return ACTION_TOOL_PEN_SIZE_MEDIUM;
	}

	if (value == "ACTION_TOOL_PEN_SIZE_THICK")
	{
		return ACTION_TOOL_PEN_SIZE_THICK;
	}

	if (value == "ACTION_TOOL_PEN_SIZE_VERY_THICK")
	{
		return ACTION_TOOL_PEN_SIZE_VERY_THICK;
	}

	if (value == "ACTION_TOOL_PEN_FILL")
	{
		return ACTION_TOOL_PEN_FILL;
	}

	if (value == "ACTION_TOOL_PEN_FILL_TRANSPARENCY")
	{
		return ACTION_TOOL_PEN_FILL_TRANSPARENCY;
	}

	if (value == "ACTION_TOOL_HILIGHTER_SIZE_FINE")
	{
		return ACTION_TOOL_HILIGHTER_SIZE_FINE;
	}

	if (value == "ACTION_TOOL_HILIGHTER_SIZE_MEDIUM")
	{
		return ACTION_TOOL_HILIGHTER_SIZE_MEDIUM;
	}

	if (value == "ACTION_TOOL_HILIGHTER_SIZE_THICK")
	{
		return ACTION_TOOL_HILIGHTER_SIZE_THICK;
	}

	if (value == "ACTION_TOOL_HILIGHTER_FILL")
	{
		return ACTION_TOOL_HILIGHTER_FILL;
	}

	if (value == "ACTION_TOOL_HILIGHTER_FILL_TRANSPARENCY")
	{
		return ACTION_TOOL_HILIGHTER_FILL_TRANSPARENCY;
	}

	if (value == "ACTION_TOOL_FILL")
	{
		return ACTION_TOOL_FILL;
	}

	if (value == "ACTION_ROTATION_SNAPPING")
	{
		return ACTION_ROTATION_SNAPPING;
	}

	if (value == "ACTION_GRID_SNAPPING")
	{
		return ACTION_GRID_SNAPPING;
	}

	if (value == "ACTION_SELECT_COLOR")
	{
		return ACTION_SELECT_COLOR;
	}

	if (value == "ACTION_SELECT_COLOR_CUSTOM")
	{
		return ACTION_SELECT_COLOR_CUSTOM;
	}

	if (value == "ACTION_SELECT_FONT")
	{
		return ACTION_SELECT_FONT;
	}

	if (value == "ACTION_FONT_BUTTON_CHANGED")
	{
		return ACTION_FONT_BUTTON_CHANGED;
	}

	if (value == "ACTION_TEX")
	{
		return ACTION_TEX;
	}

	if (value == "ACTION_ZOOM_IN")
	{
		return ACTION_ZOOM_IN;
	}

	if (value == "ACTION_ZOOM_OUT")
	{
		return ACTION_ZOOM_OUT;
	}

	if (value == "ACTION_ZOOM_FIT")
	{
		return ACTION_ZOOM_FIT;
	}

	if (value == "ACTION_ZOOM_100")
	{
		return ACTION_ZOOM_100;
	}

	if (value == "ACTION_FULLSCREEN")
	{
		return ACTION_FULLSCREEN;
	}

	if (value == "ACTION_VIEW_TWO_PAGES")
	{
		return ACTION_VIEW_TWO_PAGES;
	}

	if (value == "ACTION_VIEW_PRESENTATION_MODE")
	{
		return ACTION_VIEW_PRESENTATION_MODE;
	}

	if (value == "ACTION_MANAGE_TOOLBAR")
	{
		return ACTION_MANAGE_TOOLBAR;
	}

	if (value == "ACTION_CUSTOMIZE_TOOLBAR")
	{
		return ACTION_CUSTOMIZE_TOOLBAR;
	}

	if (value == "ACTION_RECSTOP")
	{
		return ACTION_RECSTOP;
	}

	if (value == "ACTION_ABOUT")
	{
		return ACTION_ABOUT;
	}

	if (value == "ACTION_HELP")
	{
		return ACTION_HELP;
	}

	if (value == "ACTION_FOOTER_PAGESPIN")
	{
		return ACTION_FOOTER_PAGESPIN;
	}

	if (value == "ACTION_FOOTER_ZOOM_SLIDER")
	{
		return ACTION_FOOTER_ZOOM_SLIDER;
	}

	if (value == "ACTION_FOOTER_LAYER")
	{
		return ACTION_FOOTER_LAYER;
	}

	if (value == "ACTION_NOT_SELECTED")
	{
		return ACTION_NOT_SELECTED;
	}

	g_error("Invalid enum value for ActionType: «%s»", value.c_str());
	return ACTION_NONE;
}



string ActionType_toString(ActionType value)
{
	if (value == ACTION_NONE)
	{
		return "ACTION_NONE";
	}

	if (value == ACTION_NEW)
	{
		return "ACTION_NEW";
	}

	if (value == ACTION_OPEN)
	{
		return "ACTION_OPEN";
	}

	if (value == ACTION_ANNOTATE_PDF)
	{
		return "ACTION_ANNOTATE_PDF";
	}

	if (value == ACTION_SAVE)
	{
		return "ACTION_SAVE";
	}

	if (value == ACTION_SAVE_AS)
	{
		return "ACTION_SAVE_AS";
	}

	if (value == ACTION_EXPORT_AS_PDF)
	{
		return "ACTION_EXPORT_AS_PDF";
	}

	if (value == ACTION_EXPORT_AS)
	{
		return "ACTION_EXPORT_AS";
	}

	if (value == ACTION_PRINT)
	{
		return "ACTION_PRINT";
	}

	if (value == ACTION_QUIT)
	{
		return "ACTION_QUIT";
	}

	if (value == ACTION_UNDO)
	{
		return "ACTION_UNDO";
	}

	if (value == ACTION_REDO)
	{
		return "ACTION_REDO";
	}

	if (value == ACTION_CUT)
	{
		return "ACTION_CUT";
	}

	if (value == ACTION_COPY)
	{
		return "ACTION_COPY";
	}

	if (value == ACTION_PASTE)
	{
		return "ACTION_PASTE";
	}

	if (value == ACTION_SEARCH)
	{
		return "ACTION_SEARCH";
	}

	if (value == ACTION_DELETE)
	{
		return "ACTION_DELETE";
	}

	if (value == ACTION_SETTINGS)
	{
		return "ACTION_SETTINGS";
	}

	if (value == ACTION_GOTO_FIRST)
	{
		return "ACTION_GOTO_FIRST";
	}

	if (value == ACTION_GOTO_BACK)
	{
		return "ACTION_GOTO_BACK";
	}

	if (value == ACTION_GOTO_PAGE)
	{
		return "ACTION_GOTO_PAGE";
	}

	if (value == ACTION_GOTO_NEXT)
	{
		return "ACTION_GOTO_NEXT";
	}

	if (value == ACTION_GOTO_LAST)
	{
		return "ACTION_GOTO_LAST";
	}

	if (value == ACTION_GOTO_NEXT_LAYER)
	{
		return "ACTION_GOTO_NEXT_LAYER";
	}

	if (value == ACTION_GOTO_PREVIOUS_LAYER)
	{
		return "ACTION_GOTO_PREVIOUS_LAYER";
	}

	if (value == ACTION_GOTO_TOP_LAYER)
	{
		return "ACTION_GOTO_TOP_LAYER";
	}

	if (value == ACTION_GOTO_NEXT_ANNOTATED_PAGE)
	{
		return "ACTION_GOTO_NEXT_ANNOTATED_PAGE";
	}

	if (value == ACTION_GOTO_PREVIOUS_ANNOTATED_PAGE)
	{
		return "ACTION_GOTO_PREVIOUS_ANNOTATED_PAGE";
	}

	if (value == ACTION_NEW_PAGE_BEFORE)
	{
		return "ACTION_NEW_PAGE_BEFORE";
	}

	if (value == ACTION_NEW_PAGE_AFTER)
	{
		return "ACTION_NEW_PAGE_AFTER";
	}

	if (value == ACTION_NEW_PAGE_AT_END)
	{
		return "ACTION_NEW_PAGE_AT_END";
	}

	if (value == ACTION_CONFIGURE_PAGE_TEMPLATE)
	{
		return "ACTION_CONFIGURE_PAGE_TEMPLATE";
	}

	if (value == ACTION_DELETE_PAGE)
	{
		return "ACTION_DELETE_PAGE";
	}

	if (value == ACTION_NEW_LAYER)
	{
		return "ACTION_NEW_LAYER";
	}

	if (value == ACTION_DELETE_LAYER)
	{
		return "ACTION_DELETE_LAYER";
	}

	if (value == ACTION_PAPER_FORMAT)
	{
		return "ACTION_PAPER_FORMAT";
	}

	if (value == ACTION_PAPER_BACKGROUND_COLOR)
	{
		return "ACTION_PAPER_BACKGROUND_COLOR";
	}

	if (value == ACTION_TOOL_PEN)
	{
		return "ACTION_TOOL_PEN";
	}

	if (value == ACTION_TOOL_ERASER)
	{
		return "ACTION_TOOL_ERASER";
	}

	if (value == ACTION_TOOL_HILIGHTER)
	{
		return "ACTION_TOOL_HILIGHTER";
	}

	if (value == ACTION_TOOL_TEXT)
	{
		return "ACTION_TOOL_TEXT";
	}

	if (value == ACTION_TOOL_IMAGE)
	{
		return "ACTION_TOOL_IMAGE";
	}

	if (value == ACTION_TOOL_SELECT_RECT)
	{
		return "ACTION_TOOL_SELECT_RECT";
	}

	if (value == ACTION_TOOL_SELECT_REGION)
	{
		return "ACTION_TOOL_SELECT_REGION";
	}

	if (value == ACTION_TOOL_SELECT_OBJECT)
	{
		return "ACTION_TOOL_SELECT_OBJECT";
	}

	if (value == ACTION_TOOL_PLAY_OBJECT)
	{
		return "ACTION_TOOL_PLAY_OBJECT";
	}

	if (value == ACTION_TOOL_VERTICAL_SPACE)
	{
		return "ACTION_TOOL_VERTICAL_SPACE";
	}

	if (value == ACTION_TOOL_HAND)
	{
		return "ACTION_TOOL_HAND";
	}

	if (value == ACTION_TOOL_DEFAULT)
	{
		return "ACTION_TOOL_DEFAULT";
	}

	if (value == ACTION_SHAPE_RECOGNIZER)
	{
		return "ACTION_SHAPE_RECOGNIZER";
	}

	if (value == ACTION_TOOL_DRAW_RECT)
	{
		return "ACTION_TOOL_DRAW_RECT";
	}

	if (value == ACTION_TOOL_DRAW_CIRCLE)
	{
		return "ACTION_TOOL_DRAW_CIRCLE";
	}

	if (value == ACTION_TOOL_DRAW_ARROW)
	{
		return "ACTION_TOOL_DRAW_ARROW";
	}

	if (value == ACTION_TOOL_DRAW_COORDINATE_SYSTEM)
	{
		return "ACTION_TOOL_DRAW_COORDINATE_SYSTEM";
	}

	if (value == ACTION_RULER)
	{
		return "ACTION_RULER";
	}

	if (value == ACTION_TOOL_LINE_STYLE_PLAIN)
	{
		return "ACTION_TOOL_LINE_STYLE_PLAIN";
	}

	if (value == ACTION_TOOL_LINE_STYLE_DASH)
	{
		return "ACTION_TOOL_LINE_STYLE_DASH";
	}

	if (value == ACTION_TOOL_LINE_STYLE_DASH_DOT)
	{
		return "ACTION_TOOL_LINE_STYLE_DASH_DOT";
	}

	if (value == ACTION_TOOL_LINE_STYLE_DOT)
	{
		return "ACTION_TOOL_LINE_STYLE_DOT";
	}

	if (value == ACTION_SIZE_VERY_THIN)
	{
		return "ACTION_SIZE_VERY_THIN";
	}

	if (value == ACTION_SIZE_FINE)
	{
		return "ACTION_SIZE_FINE";
	}

	if (value == ACTION_SIZE_MEDIUM)
	{
		return "ACTION_SIZE_MEDIUM";
	}

	if (value == ACTION_SIZE_THICK)
	{
		return "ACTION_SIZE_THICK";
	}

	if (value == ACTION_SIZE_VERY_THICK)
	{
		return "ACTION_SIZE_VERY_THICK";
	}

	if (value == ACTION_TOOL_ERASER_STANDARD)
	{
		return "ACTION_TOOL_ERASER_STANDARD";
	}

	if (value == ACTION_TOOL_ERASER_WHITEOUT)
	{
		return "ACTION_TOOL_ERASER_WHITEOUT";
	}

	if (value == ACTION_TOOL_ERASER_DELETE_STROKE)
	{
		return "ACTION_TOOL_ERASER_DELETE_STROKE";
	}

	if (value == ACTION_TOOL_ERASER_SIZE_FINE)
	{
		return "ACTION_TOOL_ERASER_SIZE_FINE";
	}

	if (value == ACTION_TOOL_ERASER_SIZE_MEDIUM)
	{
		return "ACTION_TOOL_ERASER_SIZE_MEDIUM";
	}

	if (value == ACTION_TOOL_ERASER_SIZE_THICK)
	{
		return "ACTION_TOOL_ERASER_SIZE_THICK";
	}

	if (value == ACTION_TOOL_PEN_SIZE_VERY_THIN)
	{
		return "ACTION_TOOL_PEN_SIZE_VERY_THIN";
	}

	if (value == ACTION_TOOL_PEN_SIZE_FINE)
	{
		return "ACTION_TOOL_PEN_SIZE_FINE";
	}

	if (value == ACTION_TOOL_PEN_SIZE_MEDIUM)
	{
		return "ACTION_TOOL_PEN_SIZE_MEDIUM";
	}

	if (value == ACTION_TOOL_PEN_SIZE_THICK)
	{
		return "ACTION_TOOL_PEN_SIZE_THICK";
	}

	if (value == ACTION_TOOL_PEN_SIZE_VERY_THICK)
	{
		return "ACTION_TOOL_PEN_SIZE_VERY_THICK";
	}

	if (value == ACTION_TOOL_PEN_FILL)
	{
		return "ACTION_TOOL_PEN_FILL";
	}

	if (value == ACTION_TOOL_PEN_FILL_TRANSPARENCY)
	{
		return "ACTION_TOOL_PEN_FILL_TRANSPARENCY";
	}

	if (value == ACTION_TOOL_HILIGHTER_SIZE_FINE)
	{
		return "ACTION_TOOL_HILIGHTER_SIZE_FINE";
	}

	if (value == ACTION_TOOL_HILIGHTER_SIZE_MEDIUM)
	{
		return "ACTION_TOOL_HILIGHTER_SIZE_MEDIUM";
	}

	if (value == ACTION_TOOL_HILIGHTER_SIZE_THICK)
	{
		return "ACTION_TOOL_HILIGHTER_SIZE_THICK";
	}

	if (value == ACTION_TOOL_HILIGHTER_FILL)
	{
		return "ACTION_TOOL_HILIGHTER_FILL";
	}

	if (value == ACTION_TOOL_HILIGHTER_FILL_TRANSPARENCY)
	{
		return "ACTION_TOOL_HILIGHTER_FILL_TRANSPARENCY";
	}

	if (value == ACTION_TOOL_FILL)
	{
		return "ACTION_TOOL_FILL";
	}

	if (value == ACTION_ROTATION_SNAPPING)
	{
		return "ACTION_ROTATION_SNAPPING";
	}

	if (value == ACTION_GRID_SNAPPING)
	{
		return "ACTION_GRID_SNAPPING";
	}

	if (value == ACTION_SELECT_COLOR)
	{
		return "ACTION_SELECT_COLOR";
	}

	if (value == ACTION_SELECT_COLOR_CUSTOM)
	{
		return "ACTION_SELECT_COLOR_CUSTOM";
	}

	if (value == ACTION_SELECT_FONT)
	{
		return "ACTION_SELECT_FONT";
	}

	if (value == ACTION_FONT_BUTTON_CHANGED)
	{
		return "ACTION_FONT_BUTTON_CHANGED";
	}

	if (value == ACTION_TEX)
	{
		return "ACTION_TEX";
	}

	if (value == ACTION_ZOOM_IN)
	{
		return "ACTION_ZOOM_IN";
	}

	if (value == ACTION_ZOOM_OUT)
	{
		return "ACTION_ZOOM_OUT";
	}

	if (value == ACTION_ZOOM_FIT)
	{
		return "ACTION_ZOOM_FIT";
	}

	if (value == ACTION_ZOOM_100)
	{
		return "ACTION_ZOOM_100";
	}

	if (value == ACTION_FULLSCREEN)
	{
		return "ACTION_FULLSCREEN";
	}

	if (value == ACTION_VIEW_TWO_PAGES)
	{
		return "ACTION_VIEW_TWO_PAGES";
	}

	if (value == ACTION_VIEW_PRESENTATION_MODE)
	{
		return "ACTION_VIEW_PRESENTATION_MODE";
	}

	if (value == ACTION_MANAGE_TOOLBAR)
	{
		return "ACTION_MANAGE_TOOLBAR";
	}

	if (value == ACTION_CUSTOMIZE_TOOLBAR)
	{
		return "ACTION_CUSTOMIZE_TOOLBAR";
	}

	if (value == ACTION_RECSTOP)
	{
		return "ACTION_RECSTOP";
	}

	if (value == ACTION_ABOUT)
	{
		return "ACTION_ABOUT";
	}

	if (value == ACTION_HELP)
	{
		return "ACTION_HELP";
	}

	if (value == ACTION_FOOTER_PAGESPIN)
	{
		return "ACTION_FOOTER_PAGESPIN";
	}

	if (value == ACTION_FOOTER_ZOOM_SLIDER)
	{
		return "ACTION_FOOTER_ZOOM_SLIDER";
	}

	if (value == ACTION_FOOTER_LAYER)
	{
		return "ACTION_FOOTER_LAYER";
	}

	if (value == ACTION_NOT_SELECTED)
	{
		return "ACTION_NOT_SELECTED";
	}

	g_error("Invalid enum value for ActionType: %i", value);
	return "";
}