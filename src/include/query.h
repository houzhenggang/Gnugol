#define MAX_MTU 1280
#define MAX_ENTRIES 8

struct gnugol_buffer_obj {
  int size;
  int len;
  char *s;
};

typedef struct gnugol_buffer_obj buffer_obj_t;

/* bitfields are underused these days - use 'em or nuke em */

struct query_options {
  int urls:1;
  int snippets:1;
  int ads:1;
  int titles:1;
  int misc:1;
  int reg:1;
  int reverse:1;
  int broadcast:1;
  int multicast:1;
  int force:1; 
  int secure:1;
  int offline:1;
  int page:1;
  int lucky:1;
  int prime:1;
  int cache:1;
  int engine:1;
  int mirror:1;
  int input:1;
  int plugin:1;
  int output:1;
  int blind:1;
  int verbose:1;
  int ipv4:1;
  int ipv6:1;
  int trust:1;
  int dontfork:1;
  int dummy:1;
  int footer:1;
  int header:1;

  int debug;
  int nresults;
  int position;
  int safe; // 0, 1, 2
  int format;
  char *header_str;
  char *footer_str;
  char *license_str;
  char *engine_name;
  char *output_file;
  char *input_file;
  char *plugin_file;
  char *language;
  char *output_language;
  char *server;
  char *client;
  buffer_obj_t out;
  buffer_obj_t err;
  char keywords[1024];
};

typedef struct query_options QueryOptions_t;

/* I have no idea any more what this was used for. I think it was
   gnugold's internal format.

struct query_args {
  QueryOptions_t options;        // 
  int entries;
  unsigned char qsha1[20]; // Query's Sha1 - text? prefer binary... later
  unsigned char asha1[20]; // Answer's Sha1
  int nresults;
  int position;
  int nurls;
  int nsnippets;
  int nads;
  int ntitles;
  int nmisc;

  short nlinkbytes[MAX_ENTRIES];
  short nsnippetbytes[MAX_ENTRIES];
  short ntitlebytes[MAX_ENTRIES];		      
  short nadbytes[MAX_ENTRIES];
  short nmiscbytes[MAX_ENTRIES];

  char *links[MAX_ENTRIES]; 
  char *snippets[MAX_ENTRIES];
  char *titles[MAX_ENTRIES];
  char *ads[MAX_ENTRIES];
  char *misc[MAX_ENTRIES];
  char query[MAX_MTU];
  char keywords[MAX_MTU];
  char answer[MAX_MTU];	// gonnaleakmemory	      
};

typedef struct query_args QueryData;


extern int query_main  (QueryData *answers, char *host);
extern int answer_parse(QueryData *q);
extern int build_query (QueryData *q);
*/
