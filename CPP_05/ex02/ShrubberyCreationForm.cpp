#include "ShrubberyCreationForm.hpp"


// ----------------------------- Constructors ------------------------------ //
/* ShrubberyCreationForm::ShrubberyCreationForm():Form("ShrubberyCreationForm", 145, 137), target("Undefined Target")
{
	std::cout << GREEN << "Default Constructor Called ShrubberyCreationForm()" << RESET << std::endl;
} */


ShrubberyCreationForm::ShrubberyCreationForm(std::string tar):Form("ShrubberyCreationForm", 145, 137), target(tar)
{
	std::cout << GREEN << "Fields Constructor Called ShrubberyCreationForm()" << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& c):Form("ShrubberyCreationForm", 145, 137)
{
	*this = c;
	std::cout << GREEN << "Copy Constructor Called ShrubberyCreationForm()" << RESET << std::endl;
}

// ------------------------------ Destructor ------------------------------- //
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << RED << "Destructor Called ~ShrubberyCreationForm()" << RESET << std::endl;

}
// ------------------------------- Operators ------------------------------- //

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm& c)
{
	const_cast<std::string&> (target) = c.target;
	std::cout << GREEN << "Copy Assignment Operator ShrubberyCreationForm()" << RESET << std::endl;
	return *this;
}
std::ostream &operator<<(std::ostream& lhs, ShrubberyCreationForm const &rhs)
{
	lhs << rhs.getName() << " , Status : " <<  checkStatus(rhs.getStatus()) << " | Sign_grade = " << rhs.getSgrade() << " | Exec_grade = " << rhs.getEgrade();
	return (lhs);
}

// --------------------------- Getters && Setters -------------------------- //


// --------------------------------- Methods ------------------------------- //


void	ShrubberyCreationForm::execute(Bureaucrat const & executer) const
{
	if(this->getStatus())
	{
		if(executer.getGrade() <= this->getEgrade())
		{
			std::ofstream target_file((target+"_shrubbery").c_str());
			if (!target_file)
			{
				std::cerr << "Unable to open file. " << std::endl;
				return ;
			}	
			target_file << " ###########################  V##'############################" << std::endl;
			target_file << " ###########################'`################################" << std::endl;
			target_file << " #########################V'  `V  ############################" << std::endl;
			target_file << " ########################V'      ,############################" << std::endl;
			target_file << " #########`#############V      ,A###########################V" << std::endl;
			target_file << " ########' `###########V      ,###########################V',#" << std::endl;
			target_file << " ######V'   ###########l      ,####################V~~~~'',###" << std::endl;
			target_file << " #####V'    ###########l      ##P' ###########V~~'   ,A#######" << std::endl;
			target_file << " #####l      d#########l      V'  ,#######V~'       A#########" << std::endl;
			target_file << " #####l      ##########l         ,####V''         ,###########" << std::endl;
			target_file << " #####l        `V######l        ,###V'   .....;A##############" << std::endl;
			target_file << " #####A,         `######A,     ,##V' ,A#######################" << std::endl;
			target_file << " #######A,        `######A,    #V'  A########'''''##########''" << std::endl;
			target_file << " ##########,,,       `####A,           `#''           '''  ,,," << std::endl;
			target_file << " #############A,                               ,,,     ,######" << std::endl;
			target_file << " ######################oooo,                 ;####, ,#########" << std::endl;
			target_file << " ##################P'                   A,   ;#####V##########" << std::endl;
			target_file << " #####P'    ''''       ,###             `#,     `V############" << std::endl;
			target_file << " ##P'                ,d###;              ##,       `V#########" << std::endl;
			target_file << " ##########A,,   #########A              )##,    ##A,..,ooA###" << std::endl;
			target_file << " #############A, Y#########A,            )####, ,#############" << std::endl;
			target_file << " ###############A ############A,        ,###### ##############" << std::endl;
			target_file << " ###############################       ,#######V##############" << std::endl;
			target_file << " ###############################      ,#######################" << std::endl;
			target_file << " ##############################P    ,d########################" << std::endl;
			target_file << " ##############################'    d#########################" << std::endl;
			target_file << " ##############################     ##########################" << std::endl;
			target_file << " ##############################     ##########################" << std::endl;
			target_file << " #############################P     ##########################" << std::endl;
			target_file << " #############################'     ##########################" << std::endl;
			target_file << " ############################P      ##########################" << std::endl;
			target_file << " ###########################P'     ;##########################" << std::endl;
			target_file << " ###########################'     ,###########################" << std::endl;
			target_file << " ##########################       ############################" << std::endl;
			target_file << " #########################       ,############################" << std::endl;
			target_file << " ########################        d###########P'    `Y#########" << std::endl;
			target_file << " #######################        ,############        #########" << std::endl;
			target_file << " ######################        ,#############        #########" << std::endl;
			target_file << " #####################        ,##############b.    ,d#########" << std::endl;
			target_file << " ####################        ,################################" << std::endl;
			target_file << " ###################         #################################" << std::endl;
			target_file << " ##################          #######################P'  `V##P'" << std::endl;
			target_file << " #######P'     `V#           ###################P'" << std::endl;
			target_file << " #####P'                    ,#################P'" << std::endl;
			target_file << " ###P'                      d##############P''" << std::endl;
			target_file << " ##P'                       V##############'" << std::endl;
			target_file << " #P'                         `V###########'" << std::endl;
			target_file << " #'                             `V##P'" << std::endl;
			
		}
		else
			throw Form::GradeTooLowException();
	}
	else
	{
		throw FormNotSignedException();
	}
}