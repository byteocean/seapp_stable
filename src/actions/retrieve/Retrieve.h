/**
 * @file	Retrieve.h
 * @author	Francesco Racciatti <racciatti.francesco@gmail.com>
 * @version	0.0.1
 * @date	2015 apr 15
 *
 * @brief	
 *
 * @detail	
 * 
 */


#ifndef RETRIEVE_H
#define RETRIEVE_H


#include "ActionBase.h"
#include "Variable.h"


class Retrieve : public ActionBase {

	private:
		string fieldName;
		string variableName;
			
	public:
		/**
		 * @brief Constructor
		 */
		Retrieve(const string fields, const string variableName);
		
		/**
		 * @brief Destructor
		 */
		virtual ~Retrieve();
	
		/**
		 * @brief get fieldName
		 */
		string getFieldName() const;
		
		 /**
		 * @brief get variableName
		 */
		string getVariableName() const;
		
		/**
		 * @brief execute the retrieve action
		 */
		Variable* execute(cMessage* msg) const;
		
};

#endif
