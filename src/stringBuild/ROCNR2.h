#ifndef ROCNR2_
#define ROCNR2_

#include <Helper.h>
#include <string>


/** @addtogroup group5

  @{
*/

/** @brief Read only struct redefinition
*  @details This class is responsible for generating read only struct redefinition, for example: 'ROA_vector_scal' (assume vector_scal is interface name)
*/
class ROCNR2 : public Helper
{
	public:
		/** Calculate variable ROCNR2 from Intermediate Representation. Calculated variable ROCNR2 is used for replacement in template file.*/
		std::string getResult(Component *com);
};
/**	@} 
*/
#endif

