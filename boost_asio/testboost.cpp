// testboost.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <vector>
#include <map>
#include <queue>

#include <iostream>

#include <boost/atomic.hpp>
#include <boost/foreach.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/optional.hpp>

#include <boost/function.hpp>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/xml_parser.hpp>
#include <boost/property_tree/json_parser.hpp>
#include <boost/property_tree/ini_parser.hpp>

#include <boost/thread.hpp>

#include "net.h"

void worker()
{
	boost::asio::io_service io_service;
	boost::shared_ptr<server> spServer(new server(io_service, 1024));
	io_service.run();
}

int main(int argc,char * argv[]) 
{
	boost::thread work(worker);
	work.detach();

	while (true)
	{

	}

    return 0;
}

