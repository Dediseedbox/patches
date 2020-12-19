--- tracker_controller.cc       2018-06-07 04:24:45.000000000 +0000
+++ new.tracker_controller.cc   2020-12-19 12:16:06.692720873 +0000
@@ -61,8 +61,11 @@

 void
 TrackerController::update_timeout(uint32_t seconds_to_next) {
-  if (!(m_flags & flag_active))
-    throw internal_error("TrackerController cannot set timeout when inactive.");
+  if (!(m_flags & flag_active)){
+    //throw internal_error("TrackerController cannot set timeout when inactive.");
+    fprintf( stderr, "\n\nTrackerController cannot set timeout when inactive.\n\n" );
+    return;
+  }

   rak::timer next_timeout = cachedTime;
