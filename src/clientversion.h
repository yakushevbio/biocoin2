#ifndef CLIENTVERSION_H
#define CLIENTVERSION_H

//
// client versioning
//

// These need to be macros, as version.cpp's and bitcoin-qt.rc's voodoo requires it
#define CLIENT_VERSION_MAJOR       1
#define CLIENT_VERSION_MINOR       0
#define CLIENT_VERSION_REVISION    1
<<<<<<< HEAD
#define CLIENT_VERSION_BUILD       2
=======
#define CLIENT_VERSION_BUILD       1
>>>>>>> 6596fa38d441bc4ef1c7cb3f06ba5e8ba2497281

// Converts the parameter X to a string after macro replacement on X has been performed.
// Don't merge these into one macro!
#define STRINGIZE(X) DO_STRINGIZE(X)
#define DO_STRINGIZE(X) #X

#endif // CLIENTVERSION_H
