// Print help pages as plain text. Usage: node totext.js file.htm ...
const fs = require("fs");
const ent = { "&nbsp;": " ", "&lt;": "<", "&gt;": ">", "&amp;": "&", "&quot;": '"', "&#39;": "'", "&copy;": "(c)", "&reg;": "(R)" };
for (const f of process.argv.slice(2)) {
  let h = fs.readFileSync(f, "latin1");
  h = h.replace(/<script[\s\S]*?<\/script>/gi, "").replace(/<style[\s\S]*?<\/style>/gi, "").replace(/<head[\s\S]*?<\/head>/gi, "");
  h = h.replace(/<\/(p|div|tr|h\d|li|table|ul|ol|pre|dt|dd)>/gi, "\n").replace(/<br\s*\/?>/gi, "\n").replace(/<\/t[dh]>/gi, "\t").replace(/<li[^>]*>/gi, "  * ");
  h = h.replace(/<[^>]+>/g, "").replace(/&[a-z#0-9]+;/gi, (m) => ent[m.toLowerCase()] ?? (m.startsWith("&#") ? String.fromCharCode(+m.slice(2, -1)) : m));
  h = h.split("\n").map((l) => l.replace(/[ \t]+$/g, "").replace(/^[ ]+/g, (s) => (s.length > 2 ? "  " : s))).join("\n").replace(/\n{3,}/g, "\n\n").trim();
  console.log(`\n######## ${f} ########\n${h}`);
}
