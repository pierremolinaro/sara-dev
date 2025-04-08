#!/usr/bin/python3
# -*- coding: utf-8 -*-
#-------------------------------------------------------------------------------

import os
import sys
import subprocess

#-------------------------------------------------------------------------------
#   FOR PRINTING IN COLOR                                                                                              *
#-------------------------------------------------------------------------------

def BLACK () :
  return '\033[30m'

#-------------------------------------------------------------------------------

def RED () :
  return '\033[31m'

#-------------------------------------------------------------------------------

def GREEN () :
  return '\033[32m'

#-------------------------------------------------------------------------------

def YELLOW () :
  return '\033[33m'

#-------------------------------------------------------------------------------

def BLUE () :
  return '\033[34m'

#-------------------------------------------------------------------------------

def MAGENTA () :
  return '\033[35m'

#-------------------------------------------------------------------------------

def CYAN () :
  return '\033[36m'

#-------------------------------------------------------------------------------

def WHITE () :
  return '\033[37m'

#-------------------------------------------------------------------------------

def ENDC () :
  return '\033[0m'

#-------------------------------------------------------------------------------

def BOLD () :
  return '\033[1m'

#-------------------------------------------------------------------------------

def UNDERLINE () :
  return '\033[4m'

#-------------------------------------------------------------------------------

def BLINK () :
  return '\033[5m'

#-------------------------------------------------------------------------------

def runCommand (command) :
  childProcess = subprocess.Popen (command)
  childProcess.wait ()
  if childProcess.returncode != 0 :
    sys.exit (childProcess.returncode)

#-------------------------------------------------------------------------------

def compileSource (source) :
  print (MAGENTA() + BOLD () + "********** Compile " + os.path.basename (os.getcwd ()) + "/" + source + ENDC ())
  command = ["time", "../makefile-unix/sara", source]
  returncode = subprocess.call (command)
  if returncode != 0 :
    sys.exit (returncode)

#-------------------------------------------------------------------------------

#--- Get script absolute path
scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))
os.chdir (scriptDir)
#--- Compile PLM
print (MAGENTA() + BOLD () + "********** Compile Sara" + ENDC ())
runCommand (["python3", "../makefile-unix/build+release.py"])
#--- Compile PLM sources
for dirname, dirnames, filenames in os.walk (scriptDir):
  for file in filenames :
    extension = os.path.splitext (file)[1]
    if extension == ".sara" :
      #print "  Dependence file : '" + file + "'"
      compileSource (file)

#-------------------------------------------------------------------------------
