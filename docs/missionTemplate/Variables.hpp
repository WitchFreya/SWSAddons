#define MISSION_AUTHORS Tiger & Maid
#define MISSION_NAME Operation: Cyprus
#define MISSION_LOCATION Corfu Sea
#define MISSION_DATE 31 AUGUST, 2524
#define MISSION_DESCRIPTION Reinforce some UNSC Marines.
#define MIN_PLAYERS 1
#define MAX_PLAYERS 999 // IMPORTANT: Update this with the number of playable units you have in your mission!
// get this by opening steam, clicking on your user in the top right, going to Account Details, and it'll be under [Your Name]'s Account in the top left.
#define AUTHOR_STEAM_ID 76561198043258500

//== Do not touch after this line unless you know what you're doing.

#define QUOTE(var1) #var1
#define STEAM_ID_HOLLY 76561198043258500
#define STEAM_ID_ASH 76561197980653776
#define SWS_ADDONS_PATH(var) QUOTE(\x\sws\addons\var)
#define QAUTHORS QUOTE(MISSION_AUTHORS)
#define QNAME QUOTE(MISSION_NAME)
#define QLOCATION QUOTE(MISSION_LOCATION)
#define QDESC QUOTE(MISSION_DESCRIPTION)
#define DEBUG_STEAM_IDS   \
  QUOTE(AUTHOR_STEAM_ID), \
  QUOTE(STEAM_ID_HOLLY),  \
  QUOTE(STEAM_ID_ASH)
