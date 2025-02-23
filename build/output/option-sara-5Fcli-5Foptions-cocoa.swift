//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//--------------------------------------------------------------------------------------------------

func enterOptionsFor_sara_5F_cli_5F_options () -> [SWIFT_CommandLineOption] {
  var array = [SWIFT_CommandLineOption] ()
  array.append (SWIFT_CommandLineOption (
    domainName: "sara_cli_options",
    type: .bool,
    identifier: "displayBDDvaluesCount",
    commandChar: "c",
    commandString: "display-bdd-values-count",
    comment: "displays values count for every BDD"
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "sara_cli_options",
    type: .bool,
    identifier: "displayBDDvalues",
    commandChar: "v",
    commandString: "display-bdd-values",
    comment: "displays values for every BDD"
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    type: .bool,
    identifier: "quiet_output",
    commandChar: "q",
    commandString: "quiet",
    comment: "Quiet output"
  ))
  return array
}

//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


