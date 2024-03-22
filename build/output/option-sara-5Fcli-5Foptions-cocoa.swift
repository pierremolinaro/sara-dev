//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//--------------------------------------------------------------------------------------------------

func enterOptions (_ ioBoolOptionArray : inout [SWIFT_CommandLineOption],
                   _ ioUIntOptionArray : inout [SWIFT_CommandLineOption],
                   _ ioStringOptionArray : inout [SWIFT_CommandLineOption],
                   _ ioStringListOptionArray : inout [SWIFT_CommandLineOption]) {
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "sara_cli_options",
    identifier: "displayBDDvaluesCount",
    commandChar: "c",
    commandString: "display-bdd-values-count",
    comment: "displays values count for every BDD",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "sara_cli_options",
    identifier: "displayBDDvalues",
    commandChar: "v",
    commandString: "display-bdd-values",
    comment: "displays values for every BDD",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "quiet_output",
    commandChar: "q",
    commandString: "quiet",
    comment: "Quiet output",
    defaultValue: ""
  ))
}

//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


