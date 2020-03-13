# cplist
easy batch copying for large mixed file directories

use this on the command line and in conjunction with any list creator that lists files in linebreak terminated paths.
Needs to be in a directory added to system path.

Usage - Technical: cplist [1] [2] (3)

arg[1]: list-file to pull paths from.

arg[2]: path to copy files to. This should have no whitespace. I've yet to implement a high quality argument parser and this will have to do for now.

arg(3): Add /y, /Y, y or Y in this argument slot to force file overwrite during copy.

Usage - General:

This is perfect when used in conjunction with other list generator programs, such as extlist(https://github.com/KaptainBflakes/extlist) as well as my list deletion program, rmlist, to strip large numbers of files of like type or of matching regex, to another directory and to remove the copies from the original directory.

Such functionality can be used to sort files of like type or matching regex, or of whatever listing function you can dream up, into different directories.

Very useful for large, and diverse, archives.
