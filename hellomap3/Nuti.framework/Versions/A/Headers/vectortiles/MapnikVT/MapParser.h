/*
 * Copyright 2014 Nutiteq Llc. All rights reserved.
 * Copying and using this code is allowed only according
 * to license terms, as given in https://www.nutiteq.com/license/
 */

#ifndef _NUTI_MAPNIKVT_MAPPARSER_H_
#define _NUTI_MAPNIKVT_MAPPARSER_H_

#include "Value.h"

#include <memory>
#include <string>

#include <pugixml.hpp>

namespace Nuti { namespace MapnikVT {
	class Map;
	class Logger;
	class SymbolizerParser;

	class MapParser {
	public:
		explicit MapParser(std::shared_ptr<SymbolizerParser> parser, std::shared_ptr<Logger> logger) : _symbolizerParser(std::move(parser)), _logger(std::move(logger)) { }
        virtual ~MapParser() = default;

		virtual std::shared_ptr<Map> parseMap(const pugi::xml_document& doc) const;

	protected:
		Value parseTypedValue(const std::string& type, const std::string& str) const;

		const std::shared_ptr<SymbolizerParser> _symbolizerParser;
		const std::shared_ptr<Logger> _logger;
	};
} }

#endif
