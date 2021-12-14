--- app/coverart/embedded.cpp.orig	2021-12-08 11:38:42 UTC
+++ app/coverart/embedded.cpp
@@ -1,14 +1,14 @@
 #include "coverart/embedded.h"
 
 #include "tag.h"
-#include "mp4/mp4file.h"
-#include "mpeg/id3v2/id3v2.h"
-#include "mpeg/id3v2/id3v2frame.h"
-#include "mpeg/id3v2/frames/attachedpictureframe.h"
-#include "mpeg/id3v2/id3v2tag.h"
-#include "mpeg/mpegfile.h"
-#include "flac/flacfile.h"
-#include"flac/flacpicture.h"
+#include "mp4file.h"
+#include "id3v2.h"
+#include "id3v2frame.h"
+#include "attachedpictureframe.h"
+#include "id3v2tag.h"
+#include "mpegfile.h"
+#include "flacfile.h"
+#include "flacpicture.h"
 #include "fileref.h"
 #include "tag.h"
 #include "tpropertymap.h"