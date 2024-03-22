//--- START OF USER ZONE 1


//--- END OF USER ZONE 1
//--------------------------------------------------------------------------------------------------

#import "option-sara-5Fcli-5Foptions-cocoa.h"
#import "OC_GGS_CommandLineOption.h"

//--------------------------------------------------------------------------------------------------

void enterOptionsFor_sara_5F_cli_5F_options (NSMutableArray * ioBoolOptionArray,
                                             NSMutableArray * ioUIntOptionArray,
                                             NSMutableArray * ioStringOptionArray,
                                             NSMutableArray * ioStringListOptionArray) {
  OC_GGS_CommandLineOption * option ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"sara_cli_options"
    identifier:@"displayBDDvaluesCount"
    commandChar:99
    commandString:@"display-bdd-values-count"
    comment:@"displays values count for every BDD"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"sara_cli_options"
    identifier:@"displayBDDvalues"
    commandChar:118
    commandString:@"display-bdd-values"
    comment:@"displays values for every BDD"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
}

//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


