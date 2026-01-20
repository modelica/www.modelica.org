---
---

# Submission guidelines for the Newletter

## Scope

Everyone is welcome to contribute a post to the Modelica newsletter, however the editor holds the right to decline a contribution without reason.
The scope of the newsletter includes all topics covered by the [Modelica Association](https://www.modelica.org) (Modelica language, libraries, FMI, SSP, DCP), related tools, and news in education (courses, books and related materials).
If you have an item of interest that you would like to share with the Modelica community, for example:

- a brief note on a Modelica related project,
- information about Modelica libraries, tools or services (technical details only, no marketing or advertising content), or
- upcoming Modelica related events.    

Please consider submitting a brief write-up about it to the Modelica Newsletter.

Submission guidelines are as follows (exceptions are possible in justified cases):

- **relevance** -- Of course, the material must be of interest to the general Modelica community.
But in addition, part of being relevant is being timely.
So articles should contain information that can impact the present and future options for readers and not simply contain historical information.

- **novelty** -- This is a newsletter.
As such, what is contained in it must be new.
It is unacceptable for an article to repeat content from previous articles.
If you feel that background information is required, provide it via a hyperlink to information stored elsewhere.
For example, don't list the features of your tool and/or library with every article about it.
Instead, include a hyperlink, e.g. "In addition to existing features, version X.Y.Z includes the following new features..."

- **tone** -- Articles are expected to be of a mostly factual nature and avoid hyperbole and excessive marketing and advertising content.
One post per product: Individual new features to a product should not be divided to another article. If the features require further description, then there shall be provided links to further information.

- **length** -- Approximately 3-4 paragraphs.
Please try to squish only the most important information into no more than 200 words.
Additional information should be linked to another page.

- **additional materials** -- Additional materials (i.e., extensive product description, leaflet, additional images etc.) could be uploaded as well to prevent dead links in the future.
It is possible (and perfectly easy) to host the linked page within the newsletter repository, however it would not be listed among the posts (only linked from the article).

- **images** -- One image no larger than 620x400 px is preferred, please upload the image alongside with your post - external images tend to break after while.
It is the submitters responsibility to resize the image to meet these guidelines. 

- **format** -- clean Markdown (see below):
  - no style attributes, HTML tags are to be avoided, when possible
  - no spacing or layout directives

## Process

The submission is done by creating a pull request to the dedicated newsletter repository.

0. Create a GitHub account, log in.
1. Navigate to the upcoming newletter e.g. https://github.com/modelica/www.modelica.org/blob/main/content/newsletter/2026-01/_index.md.
2. Click on the pen icon to edit the file.
2. Create a new section for you post.
4. Commit your changes. 
   * Note, that no changes has been made to the [Modelica website repository](https://github.com/modelica/www.modelica.org/) itself.
     Instead, GitHub created your own copy (*a fork*) of the repository with your changes. 
   * If you already have this repository forked, you may create a new branch from the original repository.
   * If you want to modify your contribution or add a local image, you have to navigate to this branch of your fork (e.g. patch-1) and make the desired changes or upload an image. You can then create a pull-request. This would issue a request to merge your whole branch - that is all changes you have made - to the original repository.
5. Create a pull-request
   * Please let the *Allow the maintainers edit...* checked, so we can fix any potential issues for you.
6. Submit the pull request -- all done.

Please note, that all your contributions are public from the beginning for anyone who knows the (public) repository. If you insist on having the contribution private prior to the release, please [let me know](mailto:filip.jezek@creativeconnections.cz).

[Subscribe to the Newsletter Contributors mailing list](http://eepurl.com/dpvIVP), so we would let you know, when the next newsletter is being prepared.
  
## Markdown syntax   

For the text body, use the [GitHub Flavored Markdown](https://github.github.com/gfm/) flavor of the Markdown syntax.
See the [cheat sheet](https://github.com/adam-p/markdown-here/wiki/markdown-cheatsheet) for an overview.

### Paragraphs

Simple line break 
in the source would not create separate paragraphs. Please use empty line between intended paragraphs instead. When a hard line-break is required, you may use four spaces `    ` at the end of the line.

    First paragraph

    Second paragraph    
    with hard break - note the four spaces at the end of the upper line

### Text style and hyperlinks

You can use **emphasize** by double asterisks (`**emphasize**`) or *italics* using single asterisks (`*italics*`).

It is easy to create [hyperlinks](https://en.wikipedia.org/wiki/Hyperlink) (as `[hyperlinks](https://en.wikipedia.org/wiki/Hyperlink)`). Caution, not-tagged links are not generated, e.g. https://modelica.org/ will stay exactly as written (even though the GitHub's *Preview changes* shows them as links)

### Images

Each post is welcome to have one image. For a single image, please keep the image size 620x400px or below. When using multiple images, please try to occupy as low vertical space as possible. If required, you can link to the full size image. 

If you commit the image together with your post, you can link it relatively, i. e.

    ![Alt text](My-Company-logo.jpg 'Title text')

The alt and title text could be omitted. Please keep in mind, that the folder is shared for the whole issue and name the images specifically to your post to avoid collisions with contributions of others. E.g. if you post name is `new-version-of-FMI` use `new-version-of-FMI-logo.png` instead of just `logo.png` to avoid conflicts.
    
### Headings

Please use **3rd level heading** for title of your post. Use **4th level heading** for any headings within your posts, e.g.

    ### Announcing new WorldPeace Modelica library
	
	Lorem ipsum...
	
	#### Compatibility issues
	
	Dolor sit amet...

### Preview

If writing directly in GitHub, make use of the *Preview changes* - which offers a live formatted preview of your text, including the images. GitHub-flavored Markdown is supported by kramdown by default, so you can use Markdown with GitHub Pages the same way you use Markdown on GitHub.

## Example

You can use the following code as a basis for your article or explore the [newsletter repository](https://github.com/modelica/www.modelica.org/tree/main/content/newsletter/) to inspire from the previous contributions.

    ### FMI User Meeting at the Modelica Conference 2015

    ![FMI logo](../2026-01/FMI.png)

    The FMI Project will organize an "**FMI User Meeting**" within the tutorial/workshop session on the first day of the Modelica Conference 2015 as a complement to the scientific track(s) on FMI.    
    The intention is 
    to increase the interaction between FMI users in different companies / institutions and the [Modelica Association](https://modelica.org/) Project FMI.

    #### Agenda

    - FMI overview
    - FMI current status
    - future developments   
      (a longer discussion is anticipated here)
    - conclusion

## Example output

This code would yield the result in GitHub preview similar to this: 
(The table with the meta information would be stripped out in the final output)

### FMI User Meeting at the Modelica Conference 2015

![FMI logo](../2026-01/FMI.png)

The FMI Project will organize an "**FMI User Meeting**" within the tutorial/workshop session on the first day of the Modelica Conference 2015 as a complement to the scientific track(s) on FMI.    
The intention is to increase the interaction between FMI users in different companies / institutions and the [Modelica Association](https://modelica.org/) Project FMI.

#### Agenda

- FMI overview
- FMI current status
- future developments (a longer discussion is anticipated here)
- conclusion
