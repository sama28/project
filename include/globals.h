/****************************************************************
		GLOBAL VARIABLE DECLARATIONS
****************************************************************/

//CacheEntry	catcache[MAXOPEN];	/* catalog cache */
//Buffer		buffer[MAXOPEN];        /* buffer pool */
char MR_CURR_DB[MR_MAX_FILENAME_SIZE];
//pageBuffer PGBUFF[MR_RELCACHE_SIZE];
//pageNode gPgTable[MR_MAXBUFPG];
//buffCat gtCat[MR_MAXBUFPG];
Page gPgTable[MR_MAXBUFPG];//global page table just collection of pages
//hash_map<std::string,int> gtCat;
//unordered_map< string,unordered_map<unsigned,buffCat> > gtCat;