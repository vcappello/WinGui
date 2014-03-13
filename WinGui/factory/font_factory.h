#ifndef FONTFACTORY_H
#define FONTFACTORY_H

#include <memory>

#include <windows.h>

#include <model/font_model.h>
#include <handler/font_handler.h>

namespace gui
{

namespace factory
{

class FontFactory
{
public:
	FontFactory();
	virtual ~FontFactory();

public:
	std::shared_ptr<gui::handler::FontHandler> create(
		std::shared_ptr<gui::model::FontModel> model);
};

}

}

#endif // FONTFACTORY_H
